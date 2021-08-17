#include <bits/stdc++.h>
#include "DynamicArray.cpp"
using namespace std;
int main(){
    DynamicArray d1;
    // cout << sizeof(d1.getter()) << endl;
    d1.addElement(10);
    d1.addElement(20);
    cout << d1.getCapacity() << endl;
    d1.addElement(30);
    d1.addElement(40);
    d1.addElement(50);
    d1.addElement(60);
    d1.addElementWithPos(70,6);
    
    cout << d1.getCapacity() << endl;
    // cout << sizeof(d1.getter()) << endl;
    d1.print();
    DynamicArray d2(d1);
    d1.addElementWithPos(51,3);
    d1.print();
    d2.print();
    cout << endl << d1.getElement(2);
    return 0;
}
