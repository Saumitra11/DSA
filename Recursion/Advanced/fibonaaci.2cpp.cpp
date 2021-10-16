#include <bits/stdc++.h>
using namespace std;
int fibonaaci(int arr[], int n, int i){
    if(i==n) return 0;
    int smaller1 = arr[i-1];
    int smaller2 = arr[i-2];
    int value = smaller1 + smaller2;
    arr[i] = value;
    return fibonaaci(arr, n, i+1);
}
int main(){
    int n;
    cout << "Enter the number of elements needed: ";
    cin >> n;
    cout << endl;
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    cout << "The fibonaaci series till the number is:";
    fibonaaci(arr, n, 2);
    for(int i = 0; i<n; i++){
    	cout << arr[i] << " ";
	}
    return 0;
}
