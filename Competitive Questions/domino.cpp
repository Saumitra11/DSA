#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int a = m*n;
    if(a%2 == 0){
        cout << endl << a/2;
    } else{
        cout << endl << (a-1)/2;
    }
    return 0;
}
