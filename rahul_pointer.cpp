#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a=1025;
	int *p=&a;
	cout<<p<<endl; //address of a
	cout<<*p<<endl; //value of a
	cout<<*(&a)<<endl; //value of a
	cout<<&p<<endl; //address of p
	cout<<*(&p)<<endl; //address of a
	
	printf("address of a : %d\n",p);
	printf("incremet of a: %d\n",p+1);
	
	int **k=&p;
	printf(" %d",*k);
	 int ***s=&k;
	
	                                                          //0000000 0000000 00000100 0000001    
                                                               //byte3	byte2   byte1    byte0
}                                                                         
