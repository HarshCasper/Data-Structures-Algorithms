

	#include <bits\stdc++.h>
	using namespace std;

	
	template<typename T>
	void BubbleSort(T Arr[], int n) { // Optimized version of Bubble Sort
		bool Swapped;
		for (int i = 0; i < n - 1; i++) {
			Swapped = false;
			for (int j = 0; j < n - i - 1; j++) {
				if (Arr[j] > Arr[j + 1]) {
					swap(Arr[j], Arr[j + 1]);
					Swapped = true; 
				}
			}
			if (!Swapped) // If the array is already sorted then there is no need to continue
				break; 
		}
	}

	template<typename T>
	void Print(T Arr[], int n) {
		for (int i = 0; i < n; i++) {
			cout << Arr[i] << " ";
		}
		cout << endl;
	}

	int main() 
	{
		int n; 
		cin >> n;
		int* Arr = new int[n];
		
		for (int i = 0; i < n; i++)
			cin >> Arr[i]; 
		
		cout << "Before Sorting" << endl;
		Print(Arr, n); 
		
		BubbleSort(Arr, n); 
		
		cout << "After Sorting" << endl;
		Print(Arr, n);
	}																										
