#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << endl;
    int x = 0;
    string str;
    for(int i = 0; i<n; i++){
        cin >> str;
        if(str.compare("X++") == 0 || str.compare("++X") == 0)
            x++;
        else if(str.compare("X--") == 0 || str.compare("--X") == 0)
            x--;
    }
    cout << endl << x;
    return 0;
}
