// https://www.hackerearth.com/challenges/competitive/march-circuits-20/algorithm/dislikes-and-party-567b9605/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
	long long N;
	cin >> N;
	long long arrNum[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin >> arrNum[i][j];
		}
	}
	long long totNum = (N*(N-1))/2;
	totNum -= (9*10);
	long long duguna = 0;
	map<pair<long,long>,int> parle;
	for(int i=0 ; i<10 ; i++){
		int curr_num = arrNum[i][0];
		for(int j=1 ; j<10 ; j++){
			pair <long,long> hath = make_pair(arrNum[i][j],curr_num);
			if(parle.find(hath) != parle.end()){
				duguna++;
			}
			else{
				hath = make_pair(curr_num,arrNum[i][j]);
				parle[hath] = 1;
			}
		}
	}
	totNum += duguna;
	cout<<totNum;

    
    return 0;
}
