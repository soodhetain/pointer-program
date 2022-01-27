//call by reference

#include<iostream>
using namespace std;
void increment(int *);
int main()
{
	int a=10;
//	increment(a);    //will not increemnt cause we are passing by value
	increment (&a);            //work cause we are passing it as reference
	cout<<a;
}

void increment(int *p)                         //means int *p=&a; 
{
	 *p=(*p)+1;                         //increment value at *p by 1
}
