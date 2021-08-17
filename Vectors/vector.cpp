#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> *vp = new vector<int>();
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1] = 100;
    v.push_back(40);
    v.push_back(50);
    cout << v.at(3) << endl;
    return 0;
}
