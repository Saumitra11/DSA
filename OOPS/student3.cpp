#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
        static int totalStudents;
    public:
        int rollNumber;
        int age;
        Student(){
            totalStudents++;
        }
        static int getTotalStudents(){
            return totalStudents;
        }
};
int Student::totalStudents = 0;
