#include <bits/stdc++.h>
#define l long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<l> ar(n);
    for(int i=0;i<n;++i)
        cin>>ar[i];
    
    l tmp,Min = LONG_LONG_MAX;

    for(int i=0;i<n;++i){
        cin>>tmp;
        if(ar[i] > 0)
            ar[i] = tmp / ar[i];
        else ar[i] = tmp;
        if(Min > ar[i])
            Min = ar[i];
    }
    cout<<Min<<endl;
    return 0;
}
