//array as function  arguement

#include<iostream>
using namespace std;
int Sum(int A[],int size)    //int A[] or int* A is same
{
	int i,x=0;
	cout<<"size of array in called function: "<<sizeof(A)<<" and size of A[0]: "<<sizeof(A[0])<<endl; 
	                                             //heere sizeof (A)=8 cause it is calculation size of pointer only ie 8 bytes
	                                             //as in array as arguement only address of first element is passed to Sum not full array
	                                             //there is not method of finding actual size of array in called function
	for(i=0;i<size;i++)
	{
		x+=*(A+i);          //orA[i]
	}
	return x;
}

int main()
{
	int A[]={1,2,3,4,5};
	int size=sizeof(A)/sizeof(A[0]);               //finding size of array at main method
	cout<<"size of array: "<<sizeof(A)<<" and size of A[0]: "<<sizeof(A[0])<<endl;
	int total=Sum(A,size);                                                      //this can also be written as Sum=(&A[0],size)
	cout<<"total: "<<total;
     
}
