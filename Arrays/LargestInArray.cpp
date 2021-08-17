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
    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << endl << "The largest element of the array is: " << max;
    return 0;
}
