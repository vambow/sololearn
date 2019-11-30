#include <iostream>
using namespace std;

class Class1{
 public:
 void sayHi(){
  cout<<"Hi from Class1"<<'\n';
  }
};

class Class2{
 public:
 void sayHi(){
  cout<<"Hi from Class2"<<'\n';
  }
};

//Instantiation
int main()
{
 Class1 test1; //test1 is an object. Class1 is type.
 test1.sayHi();//method
 Class2 test2;
 test2.sayHi();
}
