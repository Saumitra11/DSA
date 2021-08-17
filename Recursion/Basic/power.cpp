#include <bits/stdc++.h>
using namespace std;
int power(int x, int n){
	//base case
	if(n==0) return 1;
	//setup recursion
	int smallOp = power(x,n-1);
	//calculation
	return x*smallOp;
}
int main(){
	int x, n;
	cout << "Enter the number: ";
	cin >> x;
	cout << endl << "Enter the power: ";
	cin >> n;
	cout << endl << "The value is: " << power(x,n);
	return 0;
}
