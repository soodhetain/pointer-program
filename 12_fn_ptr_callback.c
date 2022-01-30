//function ponter and  callback
#include<stdio.h>
void A()
{
	printf("hello:");
	
}
 void B(void (*p)())                  //accepting function ptr as an arguemnet
{
 p();                     //calling fn through arguemnt
}
int main()
{
	void (*ptr)();                   //void (*ptr)()=A;   //or directly B(A);
	ptr=A;
	B(ptr);
//B(A);  instead of three this will also work  //A is callback fn
}

