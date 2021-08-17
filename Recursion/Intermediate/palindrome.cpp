#include <bits/stdc++.h>
using namespace std;
bool palindrome(int arr[], int start, int end){
	if(start>end) return true;
	if(arr[start] == arr[end]){
		return palindrome(arr, start+1, end-1);
	} else {
		return false;
	}
}
int main(){
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int arr[n];
	cout << endl << "Enter the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	bool palin = palindrome(arr, 0, n-1);
	if(palin){
		cout << endl << "It's a palindrome";
	} else {
		cout << endl << "It's not a palindrome";
	}
	return 0;
}
