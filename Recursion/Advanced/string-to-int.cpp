#include <bits/stdc++.h>
using namespace std;
int string_to_int(char s[], int i){
	if(i == 0){
		return 0;
	}
	int ans = string_to_int(s, i-1);
	int value = s[i-1] - '0';
	return ans*10+value;
}
int main(){
	char s[20];
	cin.getline(s, 20);
	cout << endl << typeid(string_to_int(s, strlen(s)));
	return 0;
}
