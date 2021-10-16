#include <bits/stdc++.h>
using namespace std;
int len(char s1[], int i){
	if(s1[i] == '\0') return 0;
	return len(s1, i+1) + 1;
}
int main(){
	char s1[40];
	cout << "Enter the string: ";
	cin.getline(s1, 40);
	cout << endl << "The length of string is: " << len(s1, 0);
	return 0;
}
