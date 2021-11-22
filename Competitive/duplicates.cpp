#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &v1){
    // if(v1.size() == 0) return 0;
    // if(v1.size() == 1) return 1;
    // vector<int>::iterator iter;
    // int count = 0;
    // for(int i = 1; i<=v1.size()-1; i++){
    //     iter = v1.begin()+1;
    //     if(v1.at(i) == v1.at(i-1)){
    //         v1.erase(iter);
    //         count++;
    //         i--;
    //     }
    // }
    // return count;
    // if(arr.size()==0){return 0;}
    // int j=1;
    // for(int i=1;i<arr.size();i++)
    // {
    //     if(arr[i]!=arr[i-1])
    //     {
    //         arr[j]=arr[i];
    //         j++;
    //     }
    // }
    // return j;
    vector<int> original;
    vector<int> :: iterator iter, iter2;
    for(int i = 0; i<v1.size()-1; i++){
        iter = find(original.begin(), original.end(), v1.at(i));
        int value = v1.at(i);
        if(iter != original.end()){
            iter2 = v1.begin()+i;
            v1.erase(iter2);
            i--;
        } else {
            original.push_back(value);
        }
    }
        for(auto i: v1){
        cout << v1.at(i) << " ";
    }
    return v1.size();
}
int main(){
    vector<int> v1 = {0,0,1,1,1,2,2,3,3,4};
    cout << endl << removeDuplicates(v1);
    return 0;
}