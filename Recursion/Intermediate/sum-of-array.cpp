#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n){
	if(n==0) return 0;
	
	int smaller = sum(arr+1, n-1);
	return smaller + arr[0];
}
int sum2(int arr[], int n){
	if(n==0) return 0;
	int smaller = sum2(arr, n-1);
	return smaller + arr[n-1];
}
int sum3(int arr[], int n, int i){
	if(i==n) return 0;
	int smaller = sum3(arr, n, i+1);
	return arr[i] + smaller;
}
int main(){
	int n;
	cout << "Enter the length of array: ";
	cin >> n;
	int arr[n];
	cout << endl;
	cout << "Enter the elements of the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl << "The sum of the array is: " << sum2(arr, n);
	return 0;
}
