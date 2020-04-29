#include <iostream>
using namespace std;
int main(){
    long int zeroes=0,n;
    int t;
    cin>>t;
    while(t--){
        zeroes=0;
        int tmp;
        cin>>n;
        while((tmp=n/5)>=1){
            zeroes=zeroes+tmp;
            n=tmp;
        }
        cout<<zeroes<<endl;
    }
    return 0;
}
