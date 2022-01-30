#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
int play(int bet)
{
	char c[3]={'j','k','q'};
	printf("***********Suffling***********\n");
	srand(time(NULL));
	int i;
	for(i=0;i<5;i++)
	{
		int x=rand()%3;
		int y=rand()%3;
		int temp=c[x];
		c[x]=c[y];
		c[y]=temp;
	}
	printf("Guess the position of queen - 1 , 2 or 3: ?\n");
	int position;
	scanf("%d",&position);
	while(position<0 || position>3)
	{
		printf("******Please enter valid position*******\n");
		scanf("%d",&position);
	}
	if(c[position-1]=='q')
	{
		cash+=3*bet;
	}
	else 
	{
		cash-=bet;
	}
	return cash;
	
}
int main()
{
	printf("*************Welcome to virtual Casino: ***************\n\n");
	printf("********In this game u need to guess the position of a queen in 3 cards that was suffled by this program******\n\n\n");
	printf("Intially u are provided with $100 cash ,for every right guess u will won 3 times the amount you bet\n");
	printf("and for every wrong guess u will loss the amount u betted: \n\n");
	printf("***********Lets Play************");
	printf("INTIAL  cash:$%d\n",cash);
	int y=1;
	while(cash>0 && y==1)
	{
		
		int bet;
		printf("\n\nEnter your Bet: ");
		scanf("%d",&bet);
		if(bet==0 || bet>cash)
		{
		  printf("**************** Please enter valid amount**************\n");
		  continue;
		}
	    cash=play(bet);
		printf("Total Availble Cash:$%d\n",cash);
		printf("IF you want continue enter 1: ");
		scanf("%d",&y);	    
	}	
}
