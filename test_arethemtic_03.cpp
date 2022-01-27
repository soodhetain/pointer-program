//arethemetic operation that are note allowed on pointers

#include<iostream>
using namespace std;
int main()
{ 
	int a=5;       
	int *p=&a;
	cout<<&p<<endl; // not allowed cause one can only perfrom addition and subtraxction of constants on pointers
	int *k=p;     // we are pointing to a address only not p address
	int **d=&p;
	cout<<d;	     //int *d=&p will  not work cuase its already pomiting 
	}
