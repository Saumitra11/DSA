#include <iostream>
#include <cstring>
using namespace std;
string stringCompare(char str1[], char str2[]){
    if(strlen(str1) != strlen(str2))
        return "No";
    for(int i = 0; i<strlen(str1); i++){
        if(str1[i] == str2[i])
            continue;
        else
            return "No";
    }
    return "Yes";
}
int main(){
    char name1[100], name2[100];
    cout << "Enter names: " << endl;
    cin.getline(name1,100);
    cin.getline(name2,100);
//  cout << endl << "The length of name is: " << strlen(name);
 /*
    if(strcmp(name, name2)==0)
        cout << endl << "Equal";
    else
        cout << endl << "Not Equal";
*/
//  cout << "Are the strings equal?: " << stringCompare(name, name2);
    cout << endl << "strncpy";
    cout << endl << "The strings before the change: " << endl << name1 << endl << name2;
    strncpy(name1, name2, 3);
    cout << endl << "The strings after the change: " << endl << name1 << endl << name2;

    cout << endl << "strcpy";
    cout << endl << "The strings before the change: " << endl << name1 << endl << name2;
    strcpy(name1, name2);
    cout << endl << "The strings after the change: " << endl << name1 << endl << name2;

    cout << endl << "strcat";
    cout << endl << "The strings before the change: " << endl << name1 << endl << name2;
    strcat(name1, name2);
    cout << endl << "The strings after the change: " << endl << name1 << endl << name2;
}
