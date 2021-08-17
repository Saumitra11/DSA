#include <iostream>
using namespace std;
int main(){
/*
    int a[10];
    a[0] = 2;
    a[5] = 5;
    cout << a[0] << " " << a[5] << endl;
    return 0;
*/
    int b[4] = {1, 2, 3, 4}; // initialisation
//  cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl; // printing values
/*
    for (int i = 0; i < 4; i++){
        cout << a[i];
    }
*/
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = i * i;
        cout << a[i] << " ";
    }

    cout << endl;
    cout << sizeof(a);
}
