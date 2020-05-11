// https://codeforces.com/problemset/problem/1141/B

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int> numbers;
  int num;
  for(int i=0;i<n;i++){
    cin>>num;
    numbers.push_back(num);
  }
  for(int i=0;i<n;i++){
    numbers.push_back(numbers[i]);
  }
  int temp=0,result=0;
  for(int i=0;i<n*2;i++){
    if(numbers[i]==1){
      temp++;
    }
    else{
      result=max(result,temp);
      temp=0;
    }
  }
  cout<<result;
  return 0;
}
