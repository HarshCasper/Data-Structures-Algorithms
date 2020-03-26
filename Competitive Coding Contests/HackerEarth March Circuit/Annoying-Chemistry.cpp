// https://www.hackerearth.com/challenges/competitive/march-circuits-20/algorithm/annoying-chemistry-f5fb9556/

#include "bits/stdc++.h"
using namespace std;
typedef long long int harsh;

int main()
{
    harsh x, y, p, q;
    cin>>x>>y>>p>>q;
    
    harsh val1 = x / __gcd(x, p);
    harsh val2 = y / __gcd(y, q);
    harsh val3 = __gcd(val1, val2);
    harsh val4 = val1 * val2 / val3;
    
    cout<<val4*p/x<<" "<<val4*q/y<<" "<<val4<<"\n";
    return 0;
}
