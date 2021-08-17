#include <bits/stdc++.h>
using namespace std;
void all(int arr[], int n, int value, int i){
	if(i==n) return;
	if(arr[i]==value){
		cout << i << " ";
	}
	all(arr, n, value, i+1);
	return;
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
	cout << endl;
	all(arr, n, value, 0);
	return 0;
}
