#include <bits/stdc++.h>
using namespace std;
#define l long long

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    int n,i,j;
    l c;
    vector<l> A,B;
    while(t--){
        cin>>n;
        A = vector<l>(n);
        B = vector<l>(n);
        for(int i=0;i<n;++i)
            cin>>A[i];
        for(int i=0;i<n;++i)
            cin>>B[i];

        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        c = 0;i = j = 0;
        while(i < n && j < n){
            if(A[i] > B[j]) {
                ++i;++j;++c;
            }
            else ++i;
        }
        cout<<c<<"\n";
        A.clear();
        B.clear();
    }
    return 0;
}
