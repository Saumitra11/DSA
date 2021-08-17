#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(int real, int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }
        void print(){
            cout << real << " + " << imaginary << "i" << endl;
        }
        void add(Complex const &c2){
            this->real += c2.real;
            this->imaginary += c2.imaginary;
        }
        void multiply(Complex const &c2){
            int a = ((this->real)*c2.real) - ((this->imaginary)*c2.imaginary);
            int b = ((this->real)*c2.imaginary) + ((this->imaginary)*c2.real);
            this->real = a;
            this->imaginary = b;
        }
};
int main(){
    int real1, imaginary1, real2, imaginary2;
    cout << "Enter Real Number 1: ";
    cin >> real1;
    cout << "Enter Imaginary Number 1: ";
    cin >> imaginary1;
    cout << "Enter Real Number 2: ";
    cin >> real2;
    cout << "Enter Imaginary Number 2: ";
    cin >> imaginary2;
    Complex c1(real1, imaginary1);
    Complex c2(real2, imaginary2);
    cout << "The Complex Number 1 is: ";
    c1.print();
    cout << endl << "The Complex Number 2 is: ";
    c2.print();

    c1.add(c2);
    cout << endl << "Complex Numbers Added";
    cout << endl << "The Complex Number 1 is: ";
    c1.print();
    cout << endl << "The Complex Number 2 is: ";
    c2.print();

    c1.multiply(c2);
    cout << endl << "Complex Numbers Multiplied";
    cout << endl << "The Complex Number 1 is: ";
    c1.print();
    cout << endl << "The Complex Number 2 is: ";
    c2.print();

    return 0;
}
