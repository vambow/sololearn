#include <iostream>
using namespace std;

void printArrary(int arr[], int size){
 for (int x=0; x<size; x++){
 cout << arr[x]<<", ";
 }
}

int main(){
 int arr[]={1,2,3,4,5};
 printArrary(arr,5);
}
