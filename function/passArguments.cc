#include <iostream>
using namespace std;

void myFunc(int x) {
  x = 100;
}

void myFuncRefe(int *y){
 *y=100;
}
int main() {
  int var = 20;
  int vari =20;
  myFunc(var);
  cout << var;
  myFuncRefe(&vari);
  cout<<vari;
  
}
