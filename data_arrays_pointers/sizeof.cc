#include <iostream>
using namespace std;

int main()
{
	cout << "char" << sizeof(char)<<endl;
	cout <<"int"<<sizeof(int)<<'\n';
	cout <<"float"<<sizeof(float)<<'\n';
	cout <<"double"<<sizeof(double)<<'\n';
	int var =50;
	cout<<"var." <<sizeof(var)<<'\n'<<'\n';
	
	double myArr[10];
	cout<<"myArry." << sizeof(myArr)<<'\n';
	//divide the total number of bytes in the array by the number of bytes in a single element to learn how many elements you have in the array.
	int numbers[100];
	cout<<"number of elements in the number_arry is:"<<sizeof(numbers)/sizeof(numbers[0])<<'\n';


	return 0;
}
