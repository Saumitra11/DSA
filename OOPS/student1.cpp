#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
        int age;
        char *name;
    public:
// Whenever we have dynamic data members, use own copy constructor
        Student(Student s){
            this->age = s.age;
            this->name = new char[strlen(s.name) + 1];
            strcpy(this->name, s.name);
        }
        Student(int age, char *name){
            this->age = age;
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }
        void display(){
            cout << name << " " << age << endl;
        }
};
int main(){
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();
    Student s2(s1);
/*
    name[3] = 'e';
    Student s2(30, name);
    s2.display();
    s1.display();
*/
}
