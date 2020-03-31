#include <bits\stdc++.h>
using namespace std ;

	template<typename T>
	void SelectionSort(vector<T> &Arr, int n) {
		for (int i = 0; i < n - 1; i++) {
			int min_ind = i;

			for (int j = i + 1; j < n; j++) {
				if (Arr[j] < Arr[min_ind])
					min_ind = j;
			}

			swap(Arr[min_ind], Arr[i])
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


	#include <bits\stdc++.h>
	using namespace std;

	template<typename T>
	void Heapify(vector<T>& Arr, int n, int ind) {

		int Largest = ind; // Initialize largest as root 
		int Left = 2 * ind + 1; // left = 2*i + 1 
		int Right = 2 * ind + 2; // right = 2*i + 2 

								 // If left child is larger than root
		if (Left < n && Arr[Left] > Arr[Largest]) {
			Largest = Left;
		}

		// If right child is larger than largest so far 
		if (Right < n && Arr[Right] > Arr[Largest]) {
			Largest = Right;
		}

		// If largest is not root 
		if (Largest != ind) {
			swap(Arr[ind], Arr[Largest]);
			Heapify(Arr, n, Largest); // Recursively heapify the affected sub-tree 
		}
	}

	template<typename T>
	void HeapSort(vector<T>& Arr, int n) {
		// Build heap (rearrange array) 
		for (int i = n / 2 - 1; i >= 0; i--) {
			Heapify(Arr, n, i);
		}

		// One by one extract an element from heap 
		for (int i = n - 1; i >= 0; i--) {
			swap(Arr[0], Arr[i]);
			Heapify(Arr, i, 0); // call max heapify on the reduced heap 
		}
	}

	int main() {
		int n;  cin >> n; 
		vector<int> Arr(n); 

		for (int i = 0; i < n; i++) cin >> Arr[i];
		
		cout << "Before Sorting" << endl;
		for (auto i : Arr) cout << i << " ";
		cout << endl;
		
		HeapSort(Arr, n); 
		
		cout << "After Sorting" << endl;
		for (auto i : Arr) cout << i << " ";
		cout << endl;
	}																											

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

	#include <bits\stdc++.h>
	using namespace std;

	template<typename T>
	void ShellSort(T Arr[], int n)
	{
		// We'll start  with big gap and start reduce it 
		for (int gap = n / 2; gap >= 1; gap /= 2) {
			
			for (int i = gap; i < n; i++) {
				T temp = Arr[i];
				int j;
				
				for (j = i; j >= gap && Arr[j - gap] > temp; j -= gap) {
					Arr[j] = Arr[j - gap];
				}
				// put temp (the original a[i]) in its correct location ..
				Arr[j] = temp;
			}
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
		
		ShellSort(Arr, n);
		
		cout << "After Sorting" << endl;
		Print(Arr, n);
	}

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
