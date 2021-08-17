#include <bits/stdc++.h>
#include "student3.cpp"
using namespace std;
int main(){
    Student s1;
    cout << s1.rollNumber << " " << s1.age << endl;
/*
    cout << Student::totalStudents << endl;

    cout << Student::totalStudents << endl;

    cout << Student::totalStudents << endl;
*/
    cout << Student::getTotalStudents() << endl;
    Student s2, s3, s4;
    cout << Student::getTotalStudents() << endl;
    Student s[10];
    cout << Student::getTotalStudents() << endl;
    return 0;
}
