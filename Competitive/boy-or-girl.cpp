#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = s.length();
    sort(s.begin(), s.end());
    int count1=0;
    for(int i = 0; i<s.length()-1; i++){
        if(s[i] == s[i+1]) count1++;
    }
    count = count - count1;
    if(count%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}