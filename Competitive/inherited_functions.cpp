#include<iostream>

using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};
 
class D: public A, public B, public C 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }
		A val_1;
		B val_2;
		C val_3;

		 //Implement this function
		 void update_val(int new_val)
		 {
             val_1.func(new_val);
             val_2.func(new_val);
             val_3.func(new_val);
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};


