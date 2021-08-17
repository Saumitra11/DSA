#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cout << endl;
	for(int i = 0; i<t; i++){
	    int n;
	    cin >> n;
	    cout << endl;
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        cin >> arr[i];
	    }
	    for(int i = n-1; i>=0; i--){
	        cout << arr[i];
	    }
	}
	return 0;
}