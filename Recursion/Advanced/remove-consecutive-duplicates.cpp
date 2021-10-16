#include <bits/stdc++.h>
using namespace std;
void removeD(char arr[]){
	if(arr[0]=='\0') return;
	if(arr[0]!=arr[1]){
		removeD(arr+1);
	} else {
		for(int i = 0; arr[i]!='\0'; i++){
			arr[i] = arr[i+1];
		}
		removeD(arr);
	}
}
int main(){
	char arr[40];
	char a;
	cout << "Enter the string: ";
	cin.getline(arr, 40);
	removeD(arr);
	cout << endl << "The new updated string is: " << arr;
	return 0;
}
