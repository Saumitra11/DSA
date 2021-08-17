#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int n, int value){
	if(n==0) return false;
	if(arr[0]==value) return true;
	return check(arr+1, n-1, value);
}
bool check2(int arr[], int n, int value){
	if(n==0) return false;
	bool smaller = check(arr+1, n-1, value);
	if(smaller) return smaller;
	else if(arr[0] == value) return true;
	else return false;
}
bool check3(int arr[], int n, int value){
	if(n==0) return false;
	if(arr[n-1]==value) return true;
	return check3(arr, n-1, value);
}
bool check4(int arr[], int n, int value, int i){
	if(i==n) return false;
	if(arr[i]==value) return true;
	return check4(arr, n, value, i+1);
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
	if(check4(arr, n, value, 0)) cout << endl << "Present";
	else cout << endl << "Not Present";
	return 0;
}
