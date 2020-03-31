
	#include <bits\stdc++.h>
	using namespace std;

	void Heapify(vector<int>& Arr, int n, int ind) {
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
	void BuildHeap(){
		// Build heap (rearrange array) 
		for (int i = n / 2 - 1; i >= 0; i--) {
			Heapify(Arr, n, i); 
		}
	}
	void HeapSort(vector<int>& Arr, int n) {
		BuildHeap(); // Build heap (rearrange array) 
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
