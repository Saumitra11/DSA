#include <bits/stdc++.h>
using namespace std;
void print(char arr[]){
	if(arr[0] == '\0') return;
	cout << arr[0];
	print(arr+1);
	return;
}
void reverse(char arr[]){
	if(arr[0] == '\0') return;
	reverse(arr+1);
	cout << arr[0];
}
int main(){
	char s1[40];
	cout << "Enter the string: ";
	cin.getline(s1, 40);
	cout << endl << "The word is: ";
	print(s1);
	cout << endl << "The word in reverse is: ";
	reverse(s1);
	return 0;
}
