#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abc";
    cout << s << endl;
    string s2 = "def";
    cout << s2 << endl;
    string *sp = new string;
    *sp = "gareth bale";
    cout << sp << endl << *sp << endl;
    vector<string> v;
    v.push_back(s);
    v.push_back("hello");
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    string s3 = "abcabc";
/*  cin.getline(s3,100);
    getline(cin, s3);
    cout << s3;
*/
    cout << s3[4] << endl;
    s3[0] = 'd';
    cout << s3 << endl;
    string s4 = s3 + s;
    cout << endl << s3 << endl;
    cout << s4;
    return 0;
}
