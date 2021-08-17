#include <iostream>
using namespace std;
int length(char arr[]){
    int count = 0;
    for(int i = 0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout << "Enter name: ";
    cin.getline(name, 100, 'o');
    cout << endl << "Your name is: " << name;
    cout << endl << "The length of your name is: " << length(name);
    return 0;
}
