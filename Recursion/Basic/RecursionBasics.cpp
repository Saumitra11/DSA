#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    int smaller = fact(n-1);
    return smaller*n;
}
int fibonnaci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    
    int a = fibonnaci(n-1);
    int b = fibonnaci(n-2);
    
    return a+b;
}
int power(int m, int n){
    if(n==1) return m;
    int smaller = power(m, n-1);
    return smaller*m;
}
void print(int n){
    if(n==0) return;
    print(n-1);
    cout << n;
}
int num(int n){
    if(n==0) return 0;
    int smaller = num(n/10);
    return smaller+1;
}
int sum(int n){
    if(n==0) return 0;
    int smaller = sum(n/10);
    int last_digit = n%10;
    return smaller + last_digit;
}
int mul(int m, int n){
    if(n==0) return 0;
    int smaller = mul(m,n-1);
    return smaller+m;
}
int countzeros(int n){
    if(n==0) return 0;
    int smaller = countzeros(n/10);
    int last_digit = n%10;
    if(last_digit == 0) return smaller+1;
    else return smaller;
}
float geometric(int k){
    if(k==-1) return 0;
    float smaller = geometric(k-1);
    float ans = 1/pow(2,k);
    return ans+smaller;
}
int main(){
    int n, m;
    cout << "Enter the number for operation: ";
    cin >> n;
    // cout << endl << "Enter the second number of operation: ";
    // cin >> m;
    cout << endl << "The result is: " << geometric(n);
    
    return 0;
}
