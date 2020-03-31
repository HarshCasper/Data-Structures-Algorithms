// Introduction To Greedy Algorithm 
// 	Greedy Algorithm Used in Optimization Problems ==> (Maximization,Minimization) Problems


#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <functional>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
#define     endl                     '\n'

typedef   long long int               ll;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std;
int main() {
	int n, SizeOfKnapSack;
	cin >> n >> SizeOfKnapSack;
	
	vector<pair<int, int>> Value_Wigth(n);
	vector<pair<double, int>> ValuePerUnit(n);
	
	for (int i = 0; i < n; i++) {
		cin >> Value_Wigth[i].first >> Value_Wigth[i].second;
		ValuePerUnit[i].first = 1.0 * Value_Wigth[i].first / Value_Wigth[i].second;
		ValuePerUnit[i].second = Value_Wigth[i].second;
	}
	
	sort(ValuePerUnit.begin(), ValuePerUnit.end(), greater<pair<double, int>>());
	
	double Res = 0;
	
	for (int i = 0; i < ValuePerUnit.size() && SizeOfKnapSack>0; i++) {
		Res += min(ValuePerUnit[i].second, SizeOfKnapSack)*ValuePerUnit[i].first;
		SizeOfKnapSack -= min(ValuePerUnit[i].second, SizeOfKnapSack);
	}
	
	cout << fixed << setprecision(4) << Res << endl;
}
