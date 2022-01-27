#include<stdio.h>
int main()
{
	int a=1025;
	int *p=&a;
	printf(" address of a : %d \n",p);
	printf(" value of a : %d \n",*p);   //*p technique known as dereferncing(accessing and modifying the value
	// now what a integer pointer will do it will scan all the 4 bytes next to a byte to which it was pointing
	// like 1025 stores in binary as 00000000 00000000 00000100 00000001 
	                               // byte 3    byte2  byte1      byte0
								   //the pointer to a only pointes to address of byte 0 
								   //but as it was an integer pointer which takes 4 bytes ....so during dereferencing it will
								   //scan all the four bytes next to byte0  to get the value to a
    
	char *x;
	x=(char* )p;								     // here as we declared a char pointer so it can store int(4 bytes ) address 
	                                                      //hence we typecasted p to store it in character pointer
	                                                      //& is not needed cause p already stores an address
														  
	printf(" value of x : %d \n",x);		//works fine in c and print address of a
	printf(" value of a: %d\n",*x);		   //value of first byte0 ie decimal conversion of it
	printf(" value of a when x is incremented by 1: %d",*(x+1));			 //this will print value at byte1 ie 4 coz of charcter pointer						   
								                                 
	
	return 0;  
	
}
