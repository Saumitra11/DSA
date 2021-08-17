#include <iostream>
using namespace std;
int length(char* arr){
    int counter = 0;
    for(int i = 0; arr[i]!='\0'; i++){
        counter++;
    }
    return counter;
}
char* stringCompare(char* arr1, char* arr2){
    if(length(arr1) != length(arr2))
        return "Not Equal";
    int diff = 0;
    for(int i = 0; i<length(arr1); i++){
        diff = (int)arr1[i] - (int)arr2[i];
        if(diff!=0) return "Not Equal";
    }
    return "Equal";
}
void stringCopy(char* arr1, char* arr2){
    for(int i = 0; i<length(arr2); i++){
        arr1[i] = arr2[i];
    }
}
void stringnCopy(char* arr1, char* arr2, int n){
    for(int i = 0; i<n; i++){
        arr1[i] = arr2[i];
    }
}
void concat(char* arr1, char* arr2){
    int check = length(arr1);
    for(int i = 0; i<=length(arr2); i++){
        arr1[check] = arr2[i];
        check++;
    }
}
int main(){
    char name1[50], name2[50];
    cout << "Enter name a: ";
    cin.getline(name1,50);
    cout << endl << "Enter name b: ";
    cin.getline(name2,50);

    cout << endl << "The homemade strlen function works like: ";
    cout << endl << "Length of name a: " << length(name1);
    cout << endl << "Length of name b: " << length(name2);

    cout << endl << "The homemade strcmp function works like: ";
    cout << endl << "Are the 2 strings equal? " << stringCompare(name1, name2);

    cout << endl << "The homemade strcpy function works like: ";
    cout << endl << "Before the changes";
    cout << endl << "A: " << name1 << endl << "B: " << name2;
    stringCopy(name1, name2);
    cout << endl << "After the changes";
    cout << endl << "A: " << name1 << endl << "B: " << name2;

    cout << endl << "The homemade strncpy function works like: ";
    cout << endl << "Before the changes";
    cout << endl << "A: " << name1 << endl << "B: " << name2;
    stringnCopy(name1, name2, 3);
    cout << endl << "After the changes";
    cout << endl << "A: " << name1 << endl << "B: " << name2;

    cout << endl << "The homemade strcat function works like: ";
    cout << endl << "Before the changes";
    cout << endl << "A: " << name1 << endl << "B: " << name2;
    concat(name1, name2);
    cout << endl << "After the changes";
    cout << endl << "A: " << name1 << endl << "B: " << name2;

    return 0;
}
