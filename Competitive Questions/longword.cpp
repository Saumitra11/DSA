#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin >> n;
    for(int i = 0; i<n+1; i++){
            getline(cin, str);
            if(str.length() > 10)
                cout << str[0] << str.length() - 2 << str[str.length()-1] << endl;
            else
                cout << str << endl;
    }
    return 0;
}
