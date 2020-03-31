
	#include <bits\stdc++.h>
	using namespace std;

	template<typename T>
	int Partition(T Arr[], int Low, int High) {
		int Pivot = Arr[High]; 
		int i = Low - 1; 

		for (int j = Low; j < High; j++) {
			if (Arr[j] <= Pivot) {
				i++; 
				swap(Arr[j], Arr[i]); 
			}
		}
		swap(Arr[i + 1], Arr[High]); 
		return i + 1;
	}

	template<typename T>
	void quickSort(T Arr[], int Low, int High) {
		if (Low < High) {
			int Pivot = Partition(Arr, Low, High); 

			quickSort(Arr, Low, Pivot - 1); 
			quickSort(Arr, Pivot + 1, High); 
		}
	}

	template<typename T>
	void QuickSort(T Arr[], int n) {
		quickSort(Arr, 0, n - 1); 
	}

	template<typename T>
	void Print(T Arr[], int n) {
		for (int i = 0; i < n; i++)
			cout << Arr[i] << " "; 
		cout << endl;
	}

	int main() {
		int n; cin >> n;
		int* Arr = new int[n];
		for (int i = 0; i < n; i++) cin >> Arr[i]; 

		cout << "Before Sorting " << endl;
		Print(Arr, n); 
		QuickSort(Arr, n); 

		cout << "After Sorting " << endl;
		Print(Arr, n); 
	}
