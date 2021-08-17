#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    cout << endl << "Enter array elements: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << endl << "The sum of this array is: " << sum;
    return 0;
}
