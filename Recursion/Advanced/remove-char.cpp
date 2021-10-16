#include <bits/stdc++.h>
using namespace std;
void remove(char arr[], char a){
	if(arr[0]=='\0') return;
	if(arr[0]!=a){
		remove(arr+1, a);
	} else {
		for(int i = 0; arr[i]!='\0'; i++){
			arr[i] = arr[i+1];
		}
		remove(arr, a);
	}
}
int main(){
	char arr[40];
	char a;
	cout << "Enter the string: ";
	cin.getline(arr, 40);
	cout << endl << "Enter the character to be removed: ";
	cin >> a;
	remove(arr, a);
	cout << endl << "The new updated string is: " << arr;
	
	return 0;
}
