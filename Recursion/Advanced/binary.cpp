#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int value){
	if(start>end) return -1;
	int mid = floor(start+end)/2;
	if(arr[mid] == value) return mid;
	else if(arr[mid] < value){
		binarySearch(arr, mid+1, end, value);
	} else if(arr[mid] > value){
		binarySearch(arr, 0, mid-1, value);
	}
}

void selectionSort(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		int smallest = i;
		for(int j = i+1; j<n; j++){
			if(arr[smallest] > arr[j])
			smallest = j;
		}
		swap(arr[i], arr[smallest]);
	}
}

bool sortCheck(int arr[], int n){
	if(n==0 || n==1)
	return true;
	for(int i = 0; i<n-1; i++){
		if(arr[i] > arr[i+1])
		return false;
	}
	return true;
}

int main(){
	int n;
	cout << "Enter the length of the array: ";
	cin >> n;
	int arr[n];
	cout << endl;
	cout << "Enter the elements of the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int value;
	cout << endl;
	cout << "Enter the value you wish to search: ";
	cin >> value;
	cout << endl;
	if(sortCheck(arr, n)){
		cout << endl << "Array is Sorted Mate" << endl;
		if(binarySearch(arr, 0, n-1, value)!=-1){
			cout << "The element is present at position: " << binarySearch(arr, 0, n-1, value) + 1;
		}else{
			cout << "Not found";
		}
	} else{
		cout << endl << "Array not sorted mate, lemme sort it for ya: ";
		selectionSort(arr, n);
		cout << endl << "Your array now looks like: ";
		for(int i = 0; i<n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
		if(binarySearch(arr, 0, n-1, value)!=-1){
			cout << "The element is present at position: " << binarySearch(arr, 0, n-1, value) + 1;
		}else{
			cout << "Not found";
		}
	}
	return 0;
}

