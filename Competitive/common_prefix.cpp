#include <bits/stdc++.h>
using namespace std;
string prefix(vector<int> &v1){
    if(v1.size() == 0) return "";
    string prefix = v1[0];
    int len = prefix.length();
    int flag = 0;
    while(len >= 0){
         int flag = 1;
         for(auto word: v1){
             if(prefix.substr(0, len) != word.substr(0, len)) flag = 0;

             if(flag == 1) return prefix.substr(0, len);
             else len--;
         }
         return "";
    }
}
int main(){
    vector<int> v1 ["flower", "flight", "flo"];
    cout << prefix(v1);
    return 0;
}