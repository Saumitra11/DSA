#include <bits/stdc++.h>
#include "Fraction.cpp"
int main() {

  Fraction f1(10, 2);
  Fraction f2(15, 4);
  Fraction const f3 = f1.add(f2);
//cout << f3.getNumerator() << " " << f3.getDenominator();
  Fraction f4 = f1+f2;
  Fraction f5 = f1.multiply(f2);
  Fraction f6 = f1 * f2;
  f1.print();
  f2.print();
  f3.print();
  f4.print();
  f5.print();
  f6.print();
  if(f1==f2)
    cout << endl << "Equal";
  else
    cout << endl << "Not Equal";
  if(f5==f6)
    cout << endl << "Equal";
  else
    cout << endl << "Not Equal";
  ++f1;
  f1.print();
  Fraction f7 = ++f1;
  f1.print();
  f7.print();
  ++f7;
  f1.print();
  f7.print();
  Fraction f8(10,2);
  Fraction f9 = f8++;
  f8.print();
  f9.print();
  Fraction f10(10, 2);
  (f10+=f9)+=f9;
  f10.print();
  f9.print();
  return 0;

}



/*
  cout << "The Value of Fraction 1 is: ";
  f1.print();
  cout << endl << "The Value of Fraction 2 is: ";
  f2.print();

  f1.add(f2);
  cout << endl << "Added F1 and F2";
  cout << endl << "The Value of Fraction 1 is: ";
  f1.print();
  cout << endl << "The Value of Fraction 2 is: ";
  f2.print();

  f1.multiply(f2);
  cout << endl << "Multiplied F1 and F2";
  cout << endl << "The Value of Fraction 1 is: ";
  f1.print();
  cout << endl << "The Value of Fraction 2 is: ";
  f2.print();
*/
