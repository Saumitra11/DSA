#include <bits/stdc++.h>
using namespace std;
void mergeArray(int x[], int y[], int a[], int s, int e){
	int mid = (s+e)/2;
	int i = s;
	int j = mid+1;
	int k = s;
	while(i<=mid && j<=e){
		if(x[i] < y[j]){
			a[k] = x[i];
			i++;
			k++;
		} else {
			a[k] = y[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		a[k] = x[i];
		i++;
		k++;
	}
	while(j<=e){
		a[k] = y[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int s, int e){
	if(s>=e) return;
	int mid = (s+e)/2;
	int x[100];
	int y[100];
	for(int i = 0; i<=mid; i++){
		x[i] = arr[i];
	}
	for(int i = mid+1; i<=e; i++){
		y[i] = arr[i];
	}
	mergeSort(x, s, mid);
	mergeSort(y, mid+1, e);
	
	mergeArray(x, y, arr, s, e);
}
int main(){
	int n;
	cout << "Enter length: ";
	cin >> n;
	int arr[n];
	cout << endl;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << endl;
	mergeSort(arr, 0, n-1);
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
