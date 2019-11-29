#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{ 
 srand(time(NULL)); //generate truely random numbers, everytime, can also use time(0)
 for (int x = 1; x<=10; x++)
 {
 cout<<1+(rand()%10)<<'\n';//randum numbers from 1 to 10
 }
 return 0;
}
