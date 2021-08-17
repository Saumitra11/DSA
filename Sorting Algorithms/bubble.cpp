#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
	for(int i = 1; i<=n-1; i++){
		for(int j = 0; j<=n-2; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cout << "Enter the length of the array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	bubbleSort(arr, n);
	cout << endl;
	cout << "The sorted array is: ";
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
