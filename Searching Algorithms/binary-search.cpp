#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int value){
	int start = 0;
	int end = n-1;
	do{
//		int mid = floor((start+end)/2);
		int mid = start + (end-start)/2;
		if(arr[mid] == value){
			return mid+1;
		}
		else if(arr[mid] > value){
			end = mid-1;
		}
		else{
			start = mid+1;
		} 
	}while(start<=end);
	return 0;	
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
		if(binarySearch(arr, n , value)!=0){
			cout << "The element is present at position: " << binarySearch(arr, n, value);
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
		if(binarySearch(arr, n , value)!=0){
			cout << "The element is present at position: " << binarySearch(arr, n, value);
		}else{
			cout << "Not found";
		}
	}
	return 0;
}
