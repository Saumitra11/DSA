#include <bits/stdc++.h>
using namespace std;
int occur(int arr[], int n, int value, int i){
	if(i==n) return 0;
	int small = occur(arr, n, value, i+1);
	if(arr[i] == value) return small + 1;
	else return small;
}
void count(int arr[], int n, int value, int i, int &ans){
	if(i==n) return;
	if(arr[i]==value) ans++;
	count(arr, n, value, i+1, ans);
}
int main(){
	int n;
	cout << "Enter the number of elements of array: ";
	cin >> n;
	int arr[n], value;
	cout << endl;
	cout << "Enter the array elements: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl << "Enter the value to find the occurences: ";
	cin >> value;
	int ans = 0;
	count(arr, n, value, 0, ans);
	cout << endl << "The number of occurences are: " << ans;
	cout << endl << "The number of occurences are: " << occur(arr, n, value, 0);
	return 0;
}
