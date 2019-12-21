// https://www.hackerrank.com/challenges/merging-communities/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findset(int x, vector <int> &r) {
    // we compress path here too
    if (r[x]!=x) r[x]=findset(r[x],r);
    return(r[x]);   
}

int main() {
    int n,q;
    cin >> n >> q;
    
    // makeset
    vector <int> root(n+1);
    vector <int> count(n+1);
    for (int i=1;i<=n;i++) {
        root[i]=i;
        count[i]=1;
    }    
    
    while (q--) {
        char t;
        cin >> t;
        
        if (t=='M') {
            int x,y;
            cin >> x >> y;   
            
            // find root of x & y
            int rx=findset(x,root);
            int ry=findset(y,root);
       
            // skip, already in same community
            if (rx==ry) continue;
 
            // do a union not using ranking 
            root[rx]=ry;
            count[ry]+=count[rx];
            count[rx]=0;
        }
        else if (t=='Q') {
            int p;
            cin >> p;
            cout << count[findset(p,root)] << endl;
        }
    }

    return 0;
}

