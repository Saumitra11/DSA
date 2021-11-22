#include <bits/stdc++.h>
using namespace std;
int majority(int* arr ,int n){
	int candidate = arr[0];
	int count = 1;
	for(int i = 1; i<n; i++){
		if(arr[i] == candidate){
			count++;
		} else {
			count --;
		}
		if(count == 0){
			candidate = arr[i];
			count = 1;
		}
	}
	// to find if majority element does not exist
	int count2 = 0;
	for(int i=0 ;i<n ;i++){
		if(arr[i] == candidate) count2++;
	}
	if(count>n/2) return candidate;
	else return -1;
}
int main(){
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	int arr[n];
	cout << endl << "Enter array contents: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl << "The majority element is: " << majority(arr, n);
	return 0;
}
