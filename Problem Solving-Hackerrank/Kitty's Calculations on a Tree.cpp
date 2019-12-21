// https://www.hackerrank.com/challenges/kittys-calculations-on-a-tree/problem

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <utility>
using namespace std;

typedef long long LL;
typedef pair<LL,LL> pii;
const int MAX_N = 2e5 + 6;
const int MAX_P = 19;
const LL mod = 1e9 + 7;

vector<int> edg[MAX_N];
int dis[MAX_P][MAX_N];
bool visit[MAX_N];

struct Cen {
    int par;
    int depth;
    pii val_v_av;  //first --> val, second --> minus
    pii val_v;
} cen[MAX_N];

vector<int> v;
int sz[MAX_N];
int mx[MAX_N];

void dfs2(int id) {
    v.push_back(id);
    visit[id]=1;
    sz[id]=1;
    mx[id]=0;
    for (int i:edg[id]) {
        if (!visit[i]) {
            dfs2(i);
            sz[id] += sz[i];
        }
    }
}

#define SZ(x) ((int)(x).size())

int get_cen(int id) {
    v.clear();
    dfs2(id);
    int tot=SZ(v);
    int cen=-1;
    for (int i:v) {
        if (max(mx[i],tot-sz[i]) <= tot/2) {
            cen=i;
        }
        visit[i]=false;
    }
    return cen;
}

void dfs3(int id,int par,int cen_depth,int dist)  {
    dis[cen_depth][id] = dist;
    for (int i:edg[id]) {
        if (!visit[i] && i!=par) {
            dfs3(i,id,cen_depth,dist+1);
        }
    }
}

void dfs(int id,int cen_par,int cen_depth) {
    int ccen=get_cen(id);
    dfs3(ccen,ccen,cen_depth,0);
    cen[ccen]={cen_par,cen_depth,{0,0},{0,0}};
    visit[ccen]=1;
    for (int i:edg[ccen]) {
        if (!visit[i]) dfs(i,ccen,cen_depth+1);
    }
}

pii operator+(const pii &p1,const pii &p2) {
    return make_pair(p1.first+p2.first,p1.second+p2.second);
}

pii operator-(const pii &p1,const pii &p2) {
    return make_pair(p1.first-p2.first,p1.second-p2.second);
}

pii operator+=(pii &p1,const pii &p2) {
    p1 = p1 + p2;
    return p1;
}

pii operator-=(pii &p1,const pii &p2) {
    p1 = p1 - p2;
    return p1;
}

void Pure(pii &p) {
    p.first = (p.first%mod + mod) % mod;
    p.second = (p.second%mod + mod) % mod;
}

void addd(LL x) {
    LL p=x;
    while (p!=-1) {
        cen[p].val_v += {x,0};
        cen[p].val_v_av += {x*dis[cen[p].depth][x],0};
        if (cen[p].par != -1) {
            int par=cen[p].par;
            cen[p].val_v -= {0,x};
            cen[p].val_v_av -= {0,x*dis[cen[par].depth][x]};
        }
        Pure(cen[p].val_v);
        Pure(cen[p].val_v_av);
        p=cen[p].par;
    }
}

void dell(LL x) {
    LL p=x;
    while (p!=-1) {
        cen[p].val_v -= {x,0};
        cen[p].val_v_av -= {x*dis[cen[p].depth][x],0};
        if (cen[p].par != -1) {
            int par=cen[p].par;
            cen[p].val_v += {0,x};
            cen[p].val_v_av += {0,x*dis[cen[par].depth][x]};
        }
        Pure(cen[p].val_v);
        Pure(cen[p].val_v_av);
        p=cen[p].par;
    }
}

LL query(LL x) {
    LL ret=0;
    LL v=0;
    LL v_av=0;
    int p=x;
    while (p!=-1) {
        v += cen[p].val_v.first;
        v_av += cen[p].val_v_av.first;
        ret += x*v_av;
        ret %= mod;
        ret += x*dis[cen[p].depth][x]*v;
        ret %= mod;
        v = cen[p].val_v.second;
        v_av = cen[p].val_v_av.second;
        p=cen[p].par;
    }
    return ret;
}

LL pow(LL a,LL n,LL mod) {
    if (n==0) return 1;
    else if (n==1) return a;
    LL ret=pow(a,n/2,mod);
    ret*=ret;
    ret%=mod;
    if (n&1) {
        ret*=a;
        ret%=mod;
    }
    return ret;
}

int main () {
    int n,q;
    scanf("%d %d",&n,&q);
    for (int i=1;n-1>=i;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        edg[a].push_back(b);
        edg[b].push_back(a);
    }
    dfs(1,-1,0);
    while (q--) {
        int k;
        scanf("%d",&k);
        vector<int> v;
        while (k--) {
            int x;
            scanf("%d",&x);
            v.push_back(x);
        }
        for (int i:v) addd(i);
        LL ans=0;
        for (int i:v) {
            ans += query(i);
            ans%=mod;
        }
        for (int i:v) dell(i);
        printf("%lld\n",(ans*pow(2,mod-2,mod) + mod)%mod);
    }
}
