#include <bits/stdc++.h>
using namespace std;
int counter(int n){
	if(n==0) return 0;
	int smallAns = counter(n/10);
	return smallAns + 1;
}
int main(){
	int n;
	cout << "Enter number: ";
	cin >> n;
	cout << endl << "The number of digits are: " << counter(n);
	return 0;
}
