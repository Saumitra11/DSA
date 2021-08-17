#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int a[], int n){
	//Base Case
	if(n==0 || n==1) return true;
	if(a[0]>a[1]) return false;
	
	bool isSmallerSorted = is_sorted(a+1, n-1);
	return isSmallerSorted;
	
}
bool is_sorted2(int a[], int n){
	//Base Case
	if(n==0 || n==1) return true;
	if(a[n-1]<a[n-2]) return false;
	
	bool isSmallerSorted = is_sorted2(a, n-1);
	return isSmallerSorted;
}
bool is_sorted3(int a[], int n){
	//Base Case
	if(n==0 || n==1) return true;
	
	bool isSmallerSorted = is_sorted3(a+1, n-1);
	if(!isSmallerSorted) return false;
	if(a[0]>a[1]) return false;
	else return true;
}
bool is_sorted4(int a[], int n){
	if(n==0 || n==1) return true;
	bool isSmallSorted = is_sorted4(a,n-1);
	if(!isSmallSorted) return false;
	if(a[n-2]>a[n-1]) return false;
	else return true;
}
int main(){
	int n;
	cout << "Enter the lenght of the array: ";
	cin >> n;
	int arr[n];
	cout << endl;
	cout << "Enter the array elements: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl;
	string s;
	if(is_sorted4(arr, n)){
		s = "Yes";
	} else {
		s = "No";
	} 
	cout << "Is this array sorted? " << s;
	return 0;
}
