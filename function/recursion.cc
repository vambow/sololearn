#include <iostream>
using namespace std;

int factorial(int n){
 if (n==1){
    return 1;
 }
 else{
 return n*factorial(n-1);
 }
}

int main(){
 int a;
 cout <<"Please enter a number: ";
 cin >> a;
 cout <<"Here is the factorial of "<<a<<": "<<factorial(a)<<'\n';
}
