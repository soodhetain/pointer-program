//modyfying value in of array which was passed as arguement

#include<iostream>
using namespace std;

void Double(int* A,int size)    //int A[]
{
	for(int i=0;i<size;i++)
	{
		*(A+i)=2*(*(A+i));           //or A[i]= 2*A[i];
	}
}
int main()
{
int A[]={1,2,3,4,5};
int size=sizeof(A)/sizeof(int);
Double(A,size);                      //or (&A[0],size)
for(int i=0;i<size;i++)
{
	cout<<A[i]<<" ";
}

}
