#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    cout << endl;
    cout << a.compare(b);
    return 0;
}
