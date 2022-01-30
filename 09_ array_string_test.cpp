#include<iostream>
using namespace std;
void print(char *c)                      //make it const char *C if u want to make string as read only
{
	while(*c !='\0')                       //C stores first addresss //can be writtern as c[i] or *(c+i)
	{
		cout<<*c;
		c++;
	}
	
}
int main()
{
	 char c[]="hetain";      //or char *C="hetain"; //but this will store as a constant in text segmented and cant be modified
//	char *c="hello";                    //can modfiy it using c[0]='a';
	 cout<<" "<<c<<" "<<endl; 
	     	             //string as a character pointer
print(c);
}

