#include <bits/stdc++.h>
using namespace std;
float geosum(int k){
	//Base Case
	if(k==-1) return 0;
	float small = geosum(k-1);
	float ans = 1/pow(2,k);
	return small + ans;
}
int main(){
	int k;
	cout << "Ente the value of k: ";
	cin >> k;
	cout << endl << "The geometric sum is: " << geosum(k);
	return 0;
}
