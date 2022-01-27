//pointers basic demonstration

#include<iostream>
using namespace std;
int main()
{
	int a=5;
	cout<<a<<endl;    //value of a
	cout<<(&a)<<endl;   //address of a
	cout<<(*(&a))<<endl;   //value of a
	int *p;
	p=&a;                           //p=a will not work because pointer only stores address of a variable not value
	cout<<p<<endl;    //address of a
	cout<<*p<<endl;   //value of a 
	cout<<&p<<endl;   //adress of p
	
	*p=12;  ///changing value of a using pointer (method is called derefferecing)
	cout<<a<<endl;
	
	
	int **k;
	k=&p;
	cout<<k<<endl;   //adress of p
	cout<<*k<<endl;  //address of a
	cout<<**k<<endl;     // value of a
	return 0;
}
