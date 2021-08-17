#include <bits/stdc++.h>
using namespace std;
void print(int n){
	//Base Case
	if(n==0) return;
	//Recursive Case
	print(n-1); //will print from 1 to n-1
	//Calculation Phase
	cout << n << " ";
	return;
	
}
void print2(int n){
	if(n==0) return;
	cout << n << " ";
	print2(n-1);
	return;
}
int main(){
	int n;
	cout << "Enter till where you want to print: ";
	cin >> n;
	print(n);
	cout << endl;
	print2(n);
	return 0;
}
