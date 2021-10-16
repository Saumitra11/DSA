#include <bits/stdc++.h>
using namespace std;
void permutation(string s, int i){
	if(s[i]=='\0'){
		cout << s << endl;
		return;
	}
	for(int j=i; j<s.length(); j++){
		swap(s[i], s[j]);
		permutation(s, i+1);
		swap(s[i], s[j]);
	}
}
int main(){
	string s;
	getline(cin ,s);
	cout << endl;
	permutation(s, 0);
	return 0;
}
