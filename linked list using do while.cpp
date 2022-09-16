#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};

main()
{
	node *start,*nn,*ptr;
	char ch;
	start=ptr=NULL;
	do
	{
		nn=new node;
		if(!nn)
			cout<<"error\n";
		else
			{cout<<"enter data values\n";
				cin>>nn->data;
				nn->next=NULL;
			}
		
		if(start==NULL)
			start=ptr=nn;
		else
			{
				ptr->next=nn;
				ptr=nn;
			}
		cout<<"enter more values\n";
		cin>>ch;
	}while(ch=='Y'||ch=='y');

ptr=start;
while(ptr!=NULL)
{
	cout<<ptr->data<<"\t";
	ptr=ptr->next;
	
}

}


