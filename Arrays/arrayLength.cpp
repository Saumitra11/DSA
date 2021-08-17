#include <iostream>
using namespace std;
int length(char input[]){
    int counter = 0;
    int i = 0;
    while(input[i]!='\0'){
        counter++;
        i++;
    }
    return counter;
}
int main(){
    char name[100];
    cout << "Enter name: ";
    cin >> name;
    cout << endl << "Name length is: " << length(name);
    return 0;
}
