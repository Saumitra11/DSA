#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
}
void bubbleSort(int arr[], int n){
	int flag = 0;
	for(int i = 1; i<n; i++){
		for(int j = 0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				flag = 1;
			}
		}
		if(flag == 0) break;
	}
	printArr(arr, n);
}
void selectionSort(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		int smallest = i;
		for(int j = i+1; j<n; j++){
			if(arr[j] < arr[smallest]){
				smallest = j;
			}
		}
		swap(arr[i], arr[smallest]);
	}
	printArr(arr, n);
}
void mergeArray(int x[], int y[], int arr[], int s, int e){
	int mid = (s+e)/2;
	int i = s;
	int j = mid+1;
	int k = s;
	while(i<=mid && j<=e){
		if(x[i] < y[j]){
			arr[k] = x[i];
			i++;
			k++;
		} else {
			arr[k] = y[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		arr[k] = x[i];
		i++;
		k++;
	}
	while(j<=e){
		arr[k] = y[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int s, int e){
	if(s>=e) return;
	int mid = (s+e)/2;
	int x[100], y[100];
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
int partition(int arr[], int s, int e){
	int pivot = arr[e];
	int i = s;
	for(int j = s; j<e; j++){
		if(arr[j] < pivot){
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[e]);
	return i;
}
void quickSort(int arr[], int s, int e){
	if(s>=e) return;
	int p = partition(arr, s, e);
	quickSort(arr, s, p-1);
	quickSort(arr, p+1, e);
}
int main(){
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	int arr[n];
	cout << endl;
	cout << "Enter the elements of the array: ";
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int choice = INT_MIN;
	do{
		cout << endl;
		cout << "1. Selection Sort \n2. Bubble Sort \n3. Inbuilt Sort \n4. Merge Sort \n5. Quick Sort \n0. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;
		switch(choice){
			case 1:
				selectionSort(arr, n);
				break;
			case 2:
				bubbleSort(arr, n);
				break;
			case 3:
				sort(arr, arr+n);
				printArr(arr, n);
				break;
			case 4:
				mergeSort(arr, 0, n-1);
				printArr(arr, n);
				break;
			case 5:
				quickSort(arr, 0, n-1);
				printArr(arr, n);
				break;
			case 0:
				continue;
			default:
				cout << endl << "Invalid" << endl;
				break;
		}
	}while(choice!=0);
	return 0;
}
