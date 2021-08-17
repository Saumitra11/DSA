#include <iostream>
using namespace std;
void printArray(int a[][100], int m, int n){
    cout << endl << "Printing Row Wise: " << endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Printing Column Wise: " << endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
int main(){
    int a[100][100] = {{1,2,4},
                       {5,6,3},
                       {9,9,3,4,2}
                      };
    printArray(a, 5, 5);
    return 0;
}

