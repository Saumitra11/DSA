#include <bits/stdc++.h>
#include <map>
using namespace std;
int romanToInt(string s){
    map<char, int> letters;
    letters.insert({
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    });
    char last_char = s[s.length()-1];
    int result = letters[last_char];
    for(int i = s.length()-2; i>=0; i--){
        char value_char = s[i];
        int value_int = letters[value_char];
        char previous_char = s[i+1];
        int previous_int = letters[previous_char];
        if(value_int >= previous_int) result += value_int;
        else result -= value_int;
    }
    return result;
}
int main(){
    string s;
    getline(cin,s);
    cout << romanToInt(s);
    return 0;
}