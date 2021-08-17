#include <bits/stdc++.h>
using namespace std;
int sum(int n){
	//base case
	if(n==0) return 0;
	//recursion
	int smaller = sum(n/10);
	//calculation
	int last_digit = n%10;
	
	return last_digit + smaller;
}
int main(){
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << endl << "The sum of its values is: " << sum(n);
	return 0;
}
