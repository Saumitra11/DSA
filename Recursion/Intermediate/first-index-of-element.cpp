#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int n, int value, int i){
	if(i==n) return -1;
	if(arr[i]==value) return ix;
	return first(arr, n, value, i+1);
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
	int value;
	cout << endl << "Enter value: ";
	cin >> value;
	cout << endl << "The first occurence is at: " << first(arr, n, value, 0);
	return 0;
}
