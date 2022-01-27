//generic-pointer -void *

#include<iostream>
using namespace std;
int main()
{
	
	int a=5;   //2002
	int *p=&a;
	cout<<p<<endl;
	void *k=p;   //void pointer is called generic pointer and it does not need typesting
	                 //we can't derefernce generic pointer nor we can perform arethemetic operation on it
	cout<<k;
	cout<<*(&p)<<endl;	
	cout<<(p+1);
}
