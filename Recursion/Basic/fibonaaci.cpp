#include <bits/stdc++.h>
using namespace std;
int fibonaaci(int n){
	//base cases
	if(n==0) return 0;
	if(n==1) return 1;
	//assumption values
	int a = fibonaaci(n-1);
	int b = fibonaaci(n-2);
	//calculation
	int c = a+b;
	return c;
}
int main(){
	int n;
	cout << "Enter the number whose position you wish to find: ";
	cin >> n;
	int value = fibonaaci(n);
	cout << endl << "The value at that position is: " << value;
	return 0;
}
