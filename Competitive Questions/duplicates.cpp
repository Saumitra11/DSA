#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &v1){
    vector<int>::iterator iter;
    int count = 0;
    for(int i = 0; i<v1.size()-2; i++){
        iter = v1.begin()+i;
        if(v1.at(i) == v1.at(i+1)){
            v1.erase(iter);
            count++;
        }
    }
    for(int i = 0; i<v1.size(); i++){
        cout << v1.at(i) << " ";
    }
    return count;
}
int main(){
    vector<int> v1 = {0, 0, 1, 1, 2, 2, 3, 3, 3, 5};
    cout << endl << removeDuplicates(v1);
    return 0;
}
