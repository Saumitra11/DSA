#include <bits/stdc++.h>
using namespace std;
int zeros(int n){
	//Base Case
	if(n==0) return 0;
	//Recursive Case
	int small = zeros(n/10);
	int last_digit = n%10;
	if(last_digit == 0){
		return small + 1;
	} else {
		return small;
	}
}
int main(){
	int n;
	cout << "Enter the number to check for zeros: ";
	cin >> n;
	cout << endl << "The number of zeros are: " << zeros(n);
	return 0;
}
