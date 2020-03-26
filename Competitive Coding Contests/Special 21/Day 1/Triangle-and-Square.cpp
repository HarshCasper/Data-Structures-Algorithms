// https://practice.geeksforgeeks.org/contest-problem/triangle-and-square/0/

#include<bits/stdc++.h> 
using namespace std; 
int numberOfSquares(int base) 
{ 
   base = (base - 2); 
   base = base / 2; 
   return base * (base + 1)/2; 
}
int main() 
{ 
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       cout<<numberOfSquares(x)<<endl;
   }
   return 0; 
} 
