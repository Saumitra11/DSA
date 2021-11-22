#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int m, n, k;
		cin >> m >> n >> k;
		cout << endl << 2*(180+m) - (n+k);
	}
	return 0;
}
