#include <bits/stdc++.h>
using namespace std;
int getFirst(int* arr, int value){
	int s = 0;
	int e = sizeof(arr)/sizeof(int) - 1;
	int ans = -1;
	while(s<=e){
		int mid = s + (e-s)/2;
		if(arr[mid] == value){
			ans = mid;
			e = mid - 1;
		} else if(arr[mid] < value){
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}
int getLast(int* arr, int value){
	int s = 0;
	int e = sizeof(arr)/sizeof(int) - 1;
	int ans = -1;
	while(s<=e){
		int mid = s + (e-s)/2;
		if(arr[mid] == value){
			ans = mid;
			s = mid + 1;
		} else if(arr[mid] < value){
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}
int main(){
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	int arr[n];
	cout << endl << "Enter array contents: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int value;
	cout << endl << "Enter value to be checked: ";
	cin >> value;
	cout << endl << "The first occurence of the element is: " << getFirst(arr, value);
	cout << endl << "The last occurence of the element is: " << getLast(arr, value);
	return 0;
}
