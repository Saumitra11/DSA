#include <bits/stdc++.h>
using namespace std;
//static int global = 0;
class Student{
    int age;
    public:
    Student(){
  //      global++;
  //      cout << "Default Contructor Called" << endl;
    }
    Student (int rollNumber){
    //    cout << "Parameterised Constructor Called" << endl;
        this->rollNumber = rollNumber;
    }
    Student (int a, int r){
        //cout << "this: " << this << endl;
      //  cout << "Parameterized 2.0 called" << endl;
        age = a;
        rollNumber = r;
    }
    int rollNumber;
    void display(){
        cout << age << " " << rollNumber << endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }
    ~Student(){
        cout << "I am lmao ded";
    }
};
