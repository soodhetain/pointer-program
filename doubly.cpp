#include<iostream>
using namespace std;
int main()
{

struct node
{
	string name;
	int reg_no;
	int marks1;
	int marks2;
	int marks3;
	int total;
	int percentage;
	struct node* next;
	struct node* prev; 
}*temp, *head, *next,*last;
int choice=1;
last=0;
while(choice==1)
{
	temp=new node();
	cout<<"enter data of node: ";
	cin>>temp->name;
	cin>>temp->reg_no;
	cin>>temp->marks1;
	cin>>temp->marks2;
	cin>>temp->marks3;
	if(last==0)
	{
		head=last=temp;
		temp->prev=0;
		temp->next=0;
	}
	else
	{		
		last->next=temp;
		temp->prev=last->next;
		last=temp;
		last->next=0;
	}
	temp->total=temp->marks1+temp->marks2+temp->marks3;
	cout<<endl;
	cout<<temp->total<<endl;
	cout<<"percentage: "<<(temp->total/3)<<endl;
	cout<<"do you want to continue: ";
	cin>>choice;
}
}


