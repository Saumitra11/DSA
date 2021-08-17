#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << endl << "Enter the array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << endl << "The elements in normal order are: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "The array in reverse order is: ";
    for(int i = n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
