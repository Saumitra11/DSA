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
		cout << "1. Selection Sort \n2. Bubble Sort \n3. Inbuilt Sort \n0. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
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
			case 0:
				continue;
			default:
				cout << endl << "Invalid" << endl;
				break;
		}
	}while(choice!=0);
	return 0;
}
