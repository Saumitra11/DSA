#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e){
	int pivot = arr[e];
	int i = s;
	for(int j = s; j<e; j++){
		if(arr[j] < pivot){
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[e]);
	return i;
}
void quickSort(int arr[], int s, int e){
	if(s>=e) return;
	int p = partition(arr, s, e);
	quickSort(arr, s, p-1);
	quickSort(arr, p+1, e);
}
int main(){
	int n;
	cout << "Enter length: ";
	cin >> n;
	int arr[n];
	cout << endl;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl;
	quickSort(arr, 0, n-1);
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
	return 0;
}

/*
	partition function approach 1 not working
	int pivot = arr[e];
	int cs = 0;
	for(int i = 0; i<e; i++){
		if(arr[i] < pivot) cs++;
	}
	int pivotIndex = cs + s;
	swap(arr[e],  arr[pivotIndex]);
	int i = s;
	int j = e;
	while(i<=pivotIndex && j>=pivotIndex){
		if(arr[i] >= pivot && arr[j] <= pivot){
			swap(arr[i], arr[j]);
			i++;
			j--;
		} else {
			i++;
			j--;
		}
	}
*/
