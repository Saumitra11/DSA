class student{
    public:
        int age;
        int const rollNumber;
        int &x;

        student(int r, int age): rollNumber(r), age(age), x(this->age){
        }
};
