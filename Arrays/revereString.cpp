#include <iostream>
using namespace std;
char* reverseString(char arr[]){
    int start, last;
    start = 0;
    int counter = 0;
    for(int i = 0; arr[i]!='\0'; i++){
        counter++;
    }
    last = counter-1;
    while(start<last){
        swap(arr[start], arr[last]);
        start++;
        last--;
    }
    return arr;
}
int main(){
    char arr[100];
    cout << "Enter your name: ";
    cin.getline(arr,100);
    cout << endl << "Your original name was: " << arr;
    cout << endl << "The reverse of your name is: " << reverseString(arr);
    return 0;
}
