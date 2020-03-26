// https://practice.geeksforgeeks.org/contest-problem/m-and-n5047/0/

#include <bits/stdc++.h> 
using namespace std; 
int countDigit(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
int main(void) 
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        long long sum=a+b;
        if(countDigit(sum)==countDigit(b)){
            cout<<b<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
} 
