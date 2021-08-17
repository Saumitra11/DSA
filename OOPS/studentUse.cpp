#include <iostream>
#include "student.cpp"
using namespace std;
int main(){
    //creating object statically
    Student s1;
    Student s2, s3, s4, s5;
    //creating object dynamically
    Student *s6 = new Student;
//    s1.age = 12;
    s1.rollNumber = 33;
 //   s6 -> age = 29;
    s6 -> rollNumber = 331;
    s1.display();
    cout << endl << "S1 Age: " << s1.getAge() << endl;
    s1.getAge();
    s6->display();
    cout << endl << "S6 Age: " << s6->getAge();
//    cout << s1.age << endl << s1.rollNumber;
/*
    (*s6).age = 29;
    (*s6).rollNumber = 331;
*/
 // cout << endl << *s6.age << endl << *s6.rollNumber;
    return 0;
}
