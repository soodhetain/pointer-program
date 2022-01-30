#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
//	int A[a];           crashes for hihger values
int *A=(int*)malloc(a*sizeof(int));
A[0]=1;
	printf("%d",A[0]);
	
}
