#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
	if(start>end) return;
	swap(arr[start], arr[end]);
	reverse(arr, start+1, end-1);
}
int main(){
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int arr[n];
	cout << endl << "Enter contents of array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl << "The reversed array is: ";
	reverse(arr, 0, n-1);
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
	
}