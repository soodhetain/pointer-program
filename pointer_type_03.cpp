//very important program for typesting in c++ and c  (test_03.c)
//link for solution reference https://stackoverflow.com/questions/35946187/converting-typecasting-int-pointer-to-char-pointer-but-getting-ascii-characters/35946346

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a=1025;
	int *p=&a;
	cout<<" address of a : "<<p<<" value of a : "<<*p<<endl;   //*p technique known as dereferncing(accessing and modifying the value
	// now what a integer pointer will do it will scan all the 4 bytes next to a byte to which it was pointing
	// like 1025 stores in binary as 00000000 00000000 00000100 00000001 
	                               // byte 3    byte2  byte1      byte0
								   //the pointer to a only pointes to address of byte 0 
								   //but as it was an integer pointer which takes 4 bytes ....so during dereferencing it will
								   //scan all the four bytes next to byte0  to get the value to a
    
	char *x;
	x=(char*)p;								     // here as we declared a char pointer so it can store int(4 bytes ) address 
	                                                      //hence we typecasted p to store it in character pointer
	                                                      //& is not needed cause p already stores an address
														  
	cout<<" value of x ie address of a "<< x<<endl;    //this can able to print  value at p ie address of a due to either namespace or << treat x as string not an address
	printf(" %d\n",x);													   //this will successfully print address of a
	cout<<"value of a(truncated from 4 byte to only  1 byte : )"<<*x<<endl;   //it has print only 1 ie decimal conversion of byte0 but i can't print due to namespace 
	
	
	cout<<" solution :  ie address of a: "<< (int*)x <<endl;    //now what (void*) or (int*) it will recast to print the address of a ie value at x or p        
    cout<<" value of a: "<<(int*)(*x)<<endl;
								                                 
	
	return 0;  
	
}
