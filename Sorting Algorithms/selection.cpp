#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
	for(int i = 0; i<=n-2; i++){
		int smallest_index = i+1;
		for(int j = i+1; j<=n-1; j++){
			if(arr[j] < arr[smallest_index])
				smallest_index = j;
		}
		if(arr[i] > arr[smallest_index])
			swap(arr[i], arr[smallest_index]);
	}
}
int main(){
	int n;
	cout << "Enter the length of the array: ";
	cin >> n;
	cout << endl;
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl;
	selectionSort(arr, n);
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
