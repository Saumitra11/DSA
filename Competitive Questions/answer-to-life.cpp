#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v1;
	for(int i = 0; i<5; i++){
		int n;
		cin >> n;
		v1.push_back(n);
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i<v1.size(); i++){
		if(v1.at(i) == 42) break;
		else cout << v1.at(i) << endl;
	}
	return 0;
}
