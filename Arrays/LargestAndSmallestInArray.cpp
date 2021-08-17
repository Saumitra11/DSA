#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n] = {0};
    int max = arr[0];
    cout << endl << "Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        } else if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << endl << "The largest element of the array is: " << max;
    cout << endl << "The smallest element of the array is: " << min;
    return 0;
}
