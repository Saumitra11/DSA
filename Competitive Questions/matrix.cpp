#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int count1 = 0, count2 = 0;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                count1 = abs(2 - i);
                count2 = abs(2 - j);
            }
            cout << " ";
        }
        cout << endl;

    }
    cout << endl << count1 + count2;
    return 0;
}
