#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter the length of the array: ";
	cin >> n;
	int arr[n];
	cout << endl;
	cout << "Enter the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	cout << endl;
	cout << "The sorted array is: ";
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
