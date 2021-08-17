#include <bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==0) return 1; ///base case (step 1)
	int small = fact(n-1); ///assume this works (step 2)
	int ans = small * n; ///solve (step 3)
	return ans;
}
int main(){
	int n;
	cout << "Enter number of which you want factorial: ";
	cin >> n;
	cout << endl;
	int factu = fact(n);
	cout << "Factorial is: " << factu; 
	return 0;
}
