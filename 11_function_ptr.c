//funcion pointer in c
#include<stdio.h>
int Add(int a,int b)
{
	return a+b;
}
//int *Fun(int ,int ); // this is funtion returning a pointer
void print(char *name)
{
	printf("hello: %s",name);
}
int main()
{
	int c;
	int (*p)(int,int);           //declaring function pointer
	p=&Add;                  //can be written as p=Add cause name of fn return is address
	c=(*p)(2,3);         //deferencing function pointer      //c=p(2,3) 
 	printf("%d\n",c);
 	void (*ptr)();     //function pointer
 	ptr=print;
 	ptr("tom");
	}
