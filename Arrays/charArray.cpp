#include <iostream>
using namespace std;
int main(){
    char name[100];
    cout << "Enter your name: ";
    cin >> name;
    cout << endl << "Your name is: " << name;
    name[4] = 'x';
    cout << endl << "Your new name: " << name;
    name[3] = 'd';
    cout << endl << "Again new name is: " << name;
    name[1] = '\0';
    cout << endl << "Holy shit nigger, name is: " << name;
    return 0;
}
