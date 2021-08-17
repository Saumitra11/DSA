#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][3];
    int count[n] = {0};
    cout << endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1)
                count[i]++;
        }
        cout << endl;
    }
    int confirm = 0;
    for(int i = 0; i<n; i++){
        if(count[i]>=2) confirm++;
    }
    cout << endl << confirm;
    return 0;
}