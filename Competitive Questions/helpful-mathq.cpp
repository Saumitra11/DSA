#include <bits/stdc++.h>
using namespace std;
void sort(std::string& s){
    for(int i = 0; i<s.length(); i++){
        for(int j = i; j<s.length(); j++){
            if(s[i]>s[j])
                swap(s[i], s[j]);
        }
    }
}
int main(){
    string arr;
    getline(cin, arr);
    string arr2;
    for(int i = 0; i<arr.length(); i+=2){
        arr2.push_back(arr[i]);
    }
    sort(arr2);
    int j = 0;
    for(int i = 0; i<arr.length(); i+=2){
        arr[i] = arr2[j];
        j++;
    }
    cout << endl << arr;
    return 0;
}