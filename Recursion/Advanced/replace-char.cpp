#include <bits/stdc++.h>
using namespace std;
void replace(char s1[], char a, char b){
	if(s1[0] == '\0') return;
	if(s1[0] == a) s1[0] = b;
	cout <<s1[0];
	replace(s1+1, a, b);
}
int main(){
	char s1[100];
	cout << "Enter string: ";
	cin.getline(s1, 100);
	char a, b;
	cout << endl << "Enter character to replace: ";
	cin >> a;
	cout << endl << "Enter the character that should replace it: ";
	cin >> b;
	cout << endl << "The new array is: ";
	replace(s1, a ,b);
	return 0;
}
