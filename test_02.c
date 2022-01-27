/// pointer arthemetic

#include<stdio.h>
int main()
{
	int a=5;
	int *p=&a;
// 	cout<<"adress of  a"<<p<<endl;    //suppose of 2002
printf("adress of a : %d\n",p);
 	printf("increment the pointer by 1 : %d",*(p+1));   // this will increment the address by 4 bytes in case of intger coz +1 = 4 bytes
 	                                                       //hence result would be 2006
//	 cout<<"increment the pointer by 1 : "<<*p+1<<endl;    //this will increment value the *p ie a to 6
//	 cout<<"decrement the pointer by 1 : "<<*(p-1)<<endl; 

	return 0;
}
