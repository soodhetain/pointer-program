/// pointer arthemetic

#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int *p=&a;
 	cout<<"adress of  a: "<<p<<endl;    //suppose of 2002
 	cout<<"value of a: "<<*p<<endl;   //value of a
 	cout<<"increment the pointer by 1 : "<<p+1<<endl;   // this will increment the address by 4 bytes in case of intger coz +1 = 4 bytes
 	                                                       //hence result would be 2006
	 cout<<"increment the value at pointer using pointer : "<<*p+1<<endl;    //this will increment value the *p ie a to 6
	 cout<<"decrement the pointer by 1 to demostrate way : "<<*(p-1)<<endl; // this will print value  at (p-1)

	return 0;
}
