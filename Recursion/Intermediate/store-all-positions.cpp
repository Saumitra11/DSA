#include <bits/stdc++.h>
using namespace std;
void store(int arr1[], vector<int> &v1, int n, int value, int i){
	if(i==n) return;
	if(arr1[i]==value) v1.push_back(i);
	store(arr1, v1, n, value, i+1);
}
void store2(int arr1[], int arr2[], int n, int value, int i, int &j){
	if(i==n) return;
	if(arr1[i]==value){
		arr2[j] = i;
		j++;
	}
	store2(arr1, arr2, n, value, i+1, j);
}
int main(){
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int arr1[n];
	vector<int> v1;
	cout << endl << "Enter the elements of the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr1[i];
	}
	int value;
	cout << endl << "Enter the value: ";
	cin >> value;
//	store(arr1, v1, n, value, 0);
//	cout << endl;
//	for(int i = 0; i<v1.size(); i++){
//		cout << v1.at(i) << " ";
//	}
	int arr2[n];
	int j = 0;
	store2(arr1, arr2, n, value, 0, j);
	cout << endl;
	for(int i = 0; i<j; i++){
		cout << arr2[i] << " ";
	}
	return 0;
}
