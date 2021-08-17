#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter both the numbers: ";
    cin >> a >> b;
    cout << endl << "The numbers are a: " << a << " and b: " << b << endl;
/*
    int temp = a;
    a = b;
    b = temp;
*/
/*
    a = a^b;
    b = a^b;
    a = a^b;
*/
/*
    a = a-b;
    b = a+b;
    a = b-a;
*/
    swap(a,b);
    cout << "The swapped numbers are a: " << a << " and b: " << b << endl;
    return 0;
}
