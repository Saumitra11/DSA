#include <bits/stdc++.h>
using namespace std;
int hanoi(int n){
	if(n==0) return 0;
	return hanoi(n-1) + 1 + hanoi(n-1);
}
void toh(int n, char s, char d, char h){
	if(n==0) return;
	toh(n-1, s, h, d);
	cout << "Moving disk " << n << " from " << s << " -> " << d << endl;
	toh(n-1, h, d, s);
}
int main(){
	int n;
	cin >> n;
//	cout << endl << "Number of steps for solving tower of hanoi is: " << hanoi(n); 
	cout << endl;
	toh(n, 'A', 'C', 'B');
	return 0;
}
