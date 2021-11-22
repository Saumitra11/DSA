#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-->0){
		int m, n, k;
		cin >> m >> n >> k;
		if(m>n*k) cout << endl << "YES";
		else cout << endl << "NO";
	}
	return 0;
}
