//pointer to pointer
#include<iostream>
using namespace std;
int main()
{ 
	int a=5;       
	int *p=&a;
cout<<a<<endl;               //cout<<p*2; // not allowed cause one can only perfrom addition and subtraxction of constants on pointers
	int *k=p;     // we are pointing to a address only not p address
	int **d=&p;
//	/cout<<d;	     //int *d=&p will  not work cuase it is pointing to a pointer
	int ***s=&d;
	***s=9;                     //modifying a using pointr to pointer pointer
	cout<<***s<<endl;
	cout<<a;
	}
