#include <bits/stdc++.h>

using namespace std;
class Fraction {
  private:
    int numerator;
    int denominator;
  public:
    Fraction(){
    }
    Fraction(int numerator, int denominator) {
      this -> numerator = numerator;
      this -> denominator = denominator;
    }
  void print() const{
    cout << endl << numerator << "/" << denominator << endl;;
  }
  int LCMFunction(int a, int b) {
    int num = max(a, b);
    do{
      if (num % a == 0 && num % b == 0)
        return num;
      else
        num++;
    }while(true);
    return a * b;
  }
  const Fraction add(Fraction const &f2) {
    int LCM = this->LCMFunction(this -> denominator, f2.denominator);
    int a = LCM / this -> denominator;
    int b = LCM / f2.denominator;
/*
    cout << "LCM: " << LCM;
    cout << endl << "a: " << a;
    cout << endl << "b: " << b;
*/
    int num1 = this -> numerator * a;
    int den1 = f2.numerator * b;
/*
    cout << endl << "num1: " << num1;
    cout << endl << "den1: " << den1;
*/
    int sum = num1 + den1;
//  cout << endl << "sum: " << sum;
//  this -> numerator = sum;
//  this -> denominator = LCM;
    Fraction fnew(sum, LCM); // parameterised constructor is called
    cout << endl;
    return fnew;
  }
  const Fraction operator+(Fraction const &f2) {
    int LCM = this->LCMFunction(this -> denominator, f2.denominator);
    int a = LCM / this -> denominator;
    int b = LCM / f2.denominator;
/*
    cout << "LCM: " << LCM;
    cout << endl << "a: " << a;
    cout << endl << "b: " << b;
*/
    int num1 = this -> numerator * a;
    int den1 = f2.numerator * b;
/*
    cout << endl << "num1: " << num1;
    cout << endl << "den1: " << den1;
*/
    int sum = num1 + den1;
//  cout << endl << "sum: " << sum;
//  this -> numerator = sum;
//  this -> denominator = LCM;
    Fraction fnew(sum, LCM); // parameterised constructor is called
    cout << endl;
    return fnew;
  }
  const Fraction multiply(Fraction const &f2){
    int num = this->numerator*f2.numerator;
    int den = this->denominator*f2.denominator;
    int gcd = __gcd(num, den);
    num/=gcd;
    den/=gcd;
    Fraction fnew(num, den);
    return fnew;
  }
  const Fraction operator*(Fraction const &f2){
    int num = this->numerator*f2.numerator;
    int den = this->denominator*f2.denominator;
    int gcd = __gcd(num, den);
    num/=gcd;
    den/=gcd;
    Fraction fnew(num, den);
    return fnew;
  }
  void simplify(){
    int gcd = __gcd(this->numerator, this->denominator);
    this->numerator/=gcd;
    this->denominator/=gcd;
  }
  //pre-increment
  Fraction& operator++(){
    this->numerator = this->numerator + this->denominator;
    simplify();
    return *this;
  }
  //post-increment
  Fraction operator++(int){
    Fraction fnew(this->numerator, this->denominator);
    this->numerator += denominator;
    simplify();
    fnew.simplify();
    return fnew;
  }
  Fraction& operator+=(Fraction const &f2){
    int LCM = LCMFunction(this->denominator, f2.denominator);
    int a = LCM/this->denominator;
    int b = LCM/f2.denominator;
    this->numerator *= a;
    this->numerator += f2.numerator*b;
    this->denominator *= a;
//  cout << a << " " << b << endl;
    return *this;
  }
  const bool operator==(Fraction const &f2){
    if(this->numerator == f2.numerator){
        if(this->denominator == f2.denominator)
            return true;
        return false;
    }
    return false;
  }
  int getNumerator() const{
    return numerator;
  }
  int getDenominator() const{
    return denominator;
  }
  void setNumerator(int n){
    this->numerator = n;
  }
  void setDenominator(int d){
    this->denominator = d;
  }
};
