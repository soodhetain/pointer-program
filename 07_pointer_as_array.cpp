//pointer as array or array and pointer similarities

#include<iostream>
using namespace std;
int main()
{
	int A[] ={2,4,5,6,1};
//	cout<<A<<endl;    //address of array as A stores base address
//     cout<<&A[0]<<endl; //address of array
//	cout<<*A<<endl;     //value of first element ie 2
//	cout<<A[0]<<endl;    // """
//	int *p=A;
////	/A++;  //invalid
//	p++;  //valid

for(int i=0;i<sizeof(A)/4;i++)
{
		cout<<A<<endl;    //address of array as A stores base address
     cout<<&A[i]<<endl; //address of array
	cout<<*(A+i)<<endl;     //value of first element ie 2
	cout<<A[i]<<endl;    // """

}
}
