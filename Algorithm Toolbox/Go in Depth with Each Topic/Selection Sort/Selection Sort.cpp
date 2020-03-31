

#include <iostream>
#include <vector>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
#define     endl                     '\n'

typedef   long long int               ll;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std;

void PrintArray(vector<int> &Arr, int n) {
	for (int i = 0; i < n; i++)
		cout << Arr[i] << " ";
}

void SelctionSort(vector<int> &Arr, int n) {
	int indexOfMin;
	
	for (int i = 0; i < n - 1; i++) {
		indexOfMin = i;
		for (int j = i; j < n; j++) {
			if (Arr[j] < Arr[indexOfMin])
				indexOfMin = j;
		}

		swap(Arr[indexOfMin], Arr[i]);
	}
}


int main() {
	int n; 
	cin >> n; 

	vector<int> Arr(n);
	for (int i = 0; i < n; i++)
		cin >> Arr[i];
	
	SelctionSort(Arr, n); 
	PrintArray(Arr, n);
}
