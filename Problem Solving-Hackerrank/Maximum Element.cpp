// https://www.hackerrank.com/challenges/maximum-element/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack <int> s;
    int n,x,t;
    cin>>n;
    while(n--){    
        cin>>t;
        if(t==1){
            cin>>x;
            if(s.empty())
              s.push(x);
             else
              s.push(max(x,s.top()));
        }
        else if(t==2){
                 if (!s.empty())
                     s.pop();
        }
         if(t==3){
             cout<<s.top()<<endl;
              
        }
            
    }
    return 0;
}
