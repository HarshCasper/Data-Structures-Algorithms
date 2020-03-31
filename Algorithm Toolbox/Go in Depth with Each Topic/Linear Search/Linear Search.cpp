

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <functional>
#define all(v) v.begin(), v.end()
#define mp make_pair
#define pb push_back
#define endl '\n'

typedef long long int ll;

// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

using namespace std;

int main() {
	int n, Target; 
	cin >> n;
	vector<int> Array(n);
	for (int i = 0; i < n; i++)
		cin >> Array[i];
	cin >> Target; 
	int index = -1; 
	for (int i = 0; i < n; i++) {
		if (Array[i] == Target) {
			index = i;
			break; 
		}
	}
		cout << index << endl; 
}
