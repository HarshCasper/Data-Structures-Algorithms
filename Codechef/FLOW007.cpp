// https://www.codechef.com/LRNDSA01/problems/FLOW007

#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	while(k--){
	    long int n,rev=0,r;
	    cin>>n;
	    while(n>0){
	   r=n%10;
	   rev=rev*10+r;
	   n=n/10;
	}
	cout<<rev<<endl;
	}
	return 0;
}
