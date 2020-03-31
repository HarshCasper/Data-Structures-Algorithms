
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
int BinarySearch(vector<int> Array, int n, int Target) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (Array[mid] == Target)
			return mid;
		else if (Array[mid] > Target)
			r = mid - 1;
		else if (Array[mid] < Target)
			l = mid + 1;
	}
	return -1;
}
int main() {
	int n, Target; 
	cin >> n;
	vector<int> Array(n);
	for (int i = 0; i < n; i++)
		cin >> Array[i];
	cin >> Target; 
	cout << BinarySearch(Array, n, Target) << endl;
}
