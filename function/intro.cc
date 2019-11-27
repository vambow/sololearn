#include <iostream>
#include <math.h>
using namespace std;
//Function declaration
void printSomething()
{
 cout<<"Hi there!"<<'\n';
}

int timesTwo(int x)
{
 return x*2;
}

//Function definition
int main()
{
 printSomething();
 cout << timesTwo(5)<<'\n';
 cout <<timesTwo(6)<<'\n';
 cout <<"sqrt of 1000 is: "<<sqrt(1000)<<'\n';
return 0;
}
