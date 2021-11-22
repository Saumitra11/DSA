#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	float y;
	cin >> x >> y;
	if(x%5 == 0){
		y = y - x;
		y -= 0.50;
		cout << endl << y << "0";
	} else {
		cout << endl << y;
	}
	return 0;
}
