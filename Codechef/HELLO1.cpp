#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
using namespace std;
int main(){
  IOS
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int count=0;
    int curr_Max=INT_MAX;
    for(int i=0;i<n;i++){
      if(a[i]<=curr_Max){
        count++;
      }
      curr_Max=min(curr_Max,a[i]);
    }
    cout<<count<<endl;
  }
  return 0;
}
