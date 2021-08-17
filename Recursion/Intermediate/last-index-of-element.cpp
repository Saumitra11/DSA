#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n, int value, int i){
	if(i==-1) return -1;
	if(arr[i] == value) return i;
	return check(arr, n, value, i-1);
}
int check2(int arr[], int n, int value){
	if(n==-1) return -1;
	if(arr[n-1]==value) return n-1;
	return check2(arr, n-1, value);
}
int check3(int arr[], int n, int value, int i){
	if(i==n) return -1;
	int smaller = check3(arr, n, value, i+1);
	if(smaller == -1){
		if(arr[i] == value) return i;
		else return -1;
	} else {
		return smaller;
	}
}
int main(){
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int arr[n];
	cout << endl << "Enter the array contents: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int value;
	cout << endl << "Enter the value: ";
	cin >> value;
	cout << endl << "The last index is: " << check3(arr, n, value, 0);
	return 0;
}
