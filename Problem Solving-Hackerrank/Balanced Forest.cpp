// https://www.hackerrank.com/challenges/balanced-forest/problem

#include <iostream>
#include <cstdio>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

typedef long long LL;
const LL INF = 1e17 + 6;
const int MAX_P = 1e6 + 6;

struct Treap {
    static Treap mem[MAX_P];
    Treap *lc,*rc;
    LL key;
    int pri,sz;
    Treap(){
        
    }
    Treap(LL _key) : key(_key),pri(rand()),sz(1),lc(NULL),rc(NULL) {
        
    }
} Treap::mem[MAX_P],*ptr=Treap::mem;

int Sz(const Treap* t) {
    return t?t->sz:0;
}

void pull(Treap* t) {
    if (!t) return;
    t->sz = Sz(t->lc) + Sz(t->rc) + 1;
}

Treap* merge(Treap* a,Treap* b) {
    if (!a || !b) return a?a:b;
    else if (a->pri > b->pri) {
        a->rc=merge(a->rc,b);
        pull(a);
        return a;
    }
    else {
        b->lc=merge(a,b->lc);
        pull(b);
        return b;
    }
}

void split(Treap* t,LL k,Treap* &a,Treap* &b) {
    if (!t) a=b=NULL;
    else if (t->key <= k) {
        a=t;
        split(t->rc,k,a->rc,b);
        pull(a);
    }
    else {
        b=t;
        split(t->lc,k,a,b->lc);
        pull(b);
    }
}

bool ffind(Treap* &t,LL x) {
    Treap *tl,*tr;
    split(t,x-1,tl,t);
    split(t,x,t,tr);
    bool ret=(Sz(t)!=0);
    t=merge(tl,merge(t,tr));
    return ret;
}

const int MAX_N = 5e4 +6;

vector<int> edg[MAX_N];
LL a[MAX_N];
LL sz[MAX_N];
LL ans;

void dfs1(int id,int par) {
    sz[id] = a[id];
    for (int i:edg[id]) {
        if (i!=par) {
            dfs1(i,id);
            sz[id] += sz[i];
        }
    }
}

void addd(Treap* &t,LL val) {
    Treap *tl;
    split(t,val,tl,t);
    t=merge(merge(tl,new(++ptr)Treap(val)),t);
}

void dell(Treap* &t,LL val) {
    Treap *tl,*tr;
    split(t,val-1,tl,t);
    split(t,val,t,tr);
    t=merge(merge(tl,t->lc),merge(t->rc,tr));
}

int n;
LL tot=0;

Treap* root;

LL get_ans(LL x,LL n_2x) {
    if (x<n_2x) return INF;
    else return x-n_2x;
}

void dfs2(int id,int par) {
    //sz[id] --> x
    //see have 2*x or tot-x
    if (ffind(root,2*sz[id])) {
        ans = min(ans,get_ans(sz[id],tot-2*sz[id]));
    }
    if (ffind(root,tot-sz[id])) {
        ans = min(ans,get_ans(sz[id],tot-2*sz[id]));
    }
    //sz[id] --> tot-2*x
    //see have tot-x
    if ((tot-sz[id])%2==0) {
        LL x=(tot-sz[id])/2;
        if (ffind(root,tot-x)) {
            ans = min(ans,get_ans(x,tot-2*x));
        }
    }
    addd(root,sz[id]);
    for (int i:edg[id]) {
        if (i!=par) {
            dfs2(i,id);
        }
    }
    dell(root,sz[id]);
}

void split_by_sz(Treap* t,int k,Treap* &a,Treap* &b) {
    if (!t) a=b=NULL;
    else if (Sz(t->lc) + 1 <= k) {
        a=t;
        split_by_sz(t->rc,k-Sz(t->lc)-1,a->rc,b);
        pull(a);
    }
    else {
        b=t;
        split_by_sz(t->lc,k,a,b->lc);
    }
}

void ddfs(Treap* &a,Treap* t) {
    LL now=t->key;
    //now --> x
    //find x or tot-2*x
    if (ffind(a,now)) {
        ans = min(ans,get_ans(now,tot-2*now));
    }
    if (ffind(a,tot-2*now)) {
        ans = min(ans,get_ans(now,tot-2*now));
    }
    //now --> tot-2*x;
    //find x
    if ((tot-now)%2 == 0) {
        LL x=(tot-now)/2;
        if (ffind(a,x)) {
            ans = min(ans,get_ans(x,tot-2*x));
        }
    }
    if (t->lc) ddfs(a,t->lc);
    if (t->rc) ddfs(a,t->rc);
}

void mmerge(Treap* &a,Treap* &b) {
    ddfs(a,b);
    while(Sz(b)) {
        Treap* t;
        split_by_sz(b,1,t,b);
        Treap *tl;
        split(a,t->key-1,a,tl);
        a=merge(merge(a,t),tl);
    }
}

Treap* sagiri[MAX_N];

void dfs3(int id,int par) {
    Treap* ret=NULL;
    vector<Treap*> v;
    for (int i:edg[id]) {
        if (i!=par) {
            dfs3(i,id);
            Treap* rett=sagiri[i];
            if (Sz(rett) > Sz(ret)) {
                swap(rett,ret);
            }
            if (rett != NULL)v.push_back(rett);
        }
    }
    for (auto i:v) {
        mmerge(ret,i);
    }
    addd(ret,sz[id]);
    sagiri[id] = ret;
}

int main () {
    int T;
    scanf("%d",&T);
    while (T--) {
        ptr=Treap::mem;
        scanf("%d",&n);
        for (int i=0;n>=i;i++) {
            edg[i].clear();
        }
        for (int i=1;n>=i;i++) {
            scanf("%lld",&a[i]);
        }
        for (int i=1;n-1>=i;i++) {
            int x,y;
            scanf("%d %d",&x,&y);
            edg[x].push_back(y);
            edg[y].push_back(x);
        }
        ans = INF;
        dfs1(1,1);
        root=NULL;
        tot=sz[1];
        dfs2(1,1);
        dfs3(1,1);
        if (ans == INF) ans=-1;
        printf("%lld\n",ans);
    }
}
