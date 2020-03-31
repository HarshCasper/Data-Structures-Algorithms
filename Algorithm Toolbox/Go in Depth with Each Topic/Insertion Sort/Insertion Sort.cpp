
	#include <bits\stdc++.h>
	using namespace std;

	template<typename T>
	void InsertionSort(vector<T>& Arr, int n) {
		T Key; 
		int i, j;
		for (i = 1; i < n; i++) {
			Key = Arr[i];
			j = i - 1;

			while (j >= 0 && Arr[j] > Key) {
				Arr[j + 1] = Arr[j];
				j--;
			}
			Arr[j + 1] = Key;
		}
	}

	template<typename T>
	void Print(vector<T> Arr, int n) {
		for (int i = 0; i < n; i++)
			cout << Arr[i] << " ";
	}


	int main() {
		int n; cin >> n;
		vector<int> Arr(n);

		for (int i = 0; i < n; i++) cin >> Arr[i];
		
		cout << "Before Sorting" << endl;
		Print(Arr, n);
		
		InsertionSort(Arr, n);
		
		cout << "After Sorting" << endl;
		Print(Arr, n);
	}
