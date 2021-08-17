#include <bits/stdc++.h>
using namespace std;
int multi(int m, int n){
	//Base
	if(n==1) return m;
	//Recursion
	int small = multi(m,n-1);
	return small + m;
}
int main(){
	int m,n;
	cout << "Enter the multiplicand: ";
	cin >> m;
	cout << endl << "Enter the multiplier: ";
	cin >> n;
	cout << endl << "The product is: " << multi(m,n);
	return 0;
}
