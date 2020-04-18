#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int count = 1;
        //int i=0;
        int min_val = INT_MAX;
        int b[n];
        int j = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 1)
                b[j++] = i;
        }
        for(int i=1; i<j; i++){
            min_val = min(min_val, (b[i]-b[i-1]));
        }
        if(min_val >= 6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        //cout<<min_val<<endl;
    }
    return 0;
}
