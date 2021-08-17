#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int value){
	for(int i = 0; i<n; i++){
		if(arr[i] == value)
			return i+1;
	}	
	return 0;
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
	if(linearSearch(arr, n , value)!=0){
		cout << "The element is present at position: " << linearSearch(arr, n, value);
	}else{
		cout << "Not found";
	}
	return 0;
}
