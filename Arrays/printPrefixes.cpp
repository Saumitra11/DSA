#include <iostream>
#include <cstring>
using namespace std;
void prefixer(char arr[]){
    for(int i = 0; i<strlen(arr); i++){
        cout << endl;
        for(int j = 0; j<=i; j++){
            cout << arr[j];
        }
    }
}
void suffixer(char arr[]){
    for(int i = strlen(arr)-1; i>=0; i--){
        cout << endl;
        for(int j = i; j<=strlen(arr)-1; j++){
            cout << arr[j];
        }
    }
}
int main(){
    char arr[100];
    cout << "Enter name: ";
    cin.getline(arr, 100);
    cout << endl << "The prefixes are: ";
    prefixer(arr);
    cout << endl << "The suffixes are: ";
    suffixer(arr);
    return 0;
}
