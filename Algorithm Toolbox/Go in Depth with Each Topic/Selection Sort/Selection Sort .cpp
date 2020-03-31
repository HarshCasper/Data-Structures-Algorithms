
	#include <bits\stdc++.h>
	using namespace std ;
	
	void SelectionSort(vector<int> &Arr, int n) {
		for (int i = 0; i < n - 1; i++) {
			int min_ind = i; 
			for (int j = i + 1; j < n; j++) {
				if (Arr[j] < Arr[min_ind])
					min_ind = j; 
			}
			swap(Arr[min_ind], Arr[i]);
		}
	}

	int main() {
		int n; cin >> n; 
		vector<int> Arr(n); 
		for (int i = 0; i < n; i++)
			cin >> Arr[i];
		
		cout << "Before Sort" << endl;
		for (auto i : Arr) cout << i << " ";
		cout << endl; 
		
		SelectionSort(Arr, n);
		cout << "After Sort" << endl;
		
		for (auto i : Arr) cout << i << " ";
		cout << endl;
	}
