//Bubblesort using a function pointer
#include<stdio.h>
int compare(int a,int b)
{
	return a-b;
}
Bubblesort(int *A,int a,int (*p)(int,int))
{
	int i,j,temp=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a-1;j++)
		{
			if(p(A[j],A[j+1])>0)
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
int main()
{                                                                  
	int A[]={2,31,4,1,0};
	Bubblesort(A,5,compare);
	int i;
	for(i=0;i<5;i++)
	printf("%d ",*(A+i));
	
}
