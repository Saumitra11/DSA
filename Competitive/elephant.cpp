#include <bits/stdc++.h>
using namespace std;
int main(){
	int target;
	cin >> target;
	int count = 0;
	int steps = 0;
	int complement = 0;
	while(steps < target){
		complement = target - steps;
		if(complement <= 5){
			steps+=complement;
			count++;
		} else {
			steps+=5;
			count++;
		}
	}
	cout << endl << count;
	return 0;
}
