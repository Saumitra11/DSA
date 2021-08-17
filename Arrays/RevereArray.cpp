#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << endl << "Enter the array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int start = 0;
    int last = n-1;
    for(int i = 0; i<n; i++){
        if(start<last){
            swap(arr[start], arr[last]);
            start++;
            last--;
        }
        else break;
    }
    cout << endl << "The new array is: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
