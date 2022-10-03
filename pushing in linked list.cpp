#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
	struct node *ptrNode;
	for(ptrNode=head; ptrNode->next!=NULL;ptrNode=ptrNode->next)
	{
		cout<<ptrNode->data<<"->";
	}
	cout<<ptrNode->data<<endl;
}
struct node*search(struct node *head,int key)
{
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==key)
		{
			return ptr;
		}
		
		else
		{
			ptr=ptr->next;
		}
	}
	return ptr;
}
struct node* pushElement(struct node *head, int new_data)
{
	node *new_node=new node;
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
	return head;
}
int main()
{   int n,key;
	struct node *head=NULL;
	cin>>n;
	for(int i=0;i<n;i++)
    {   cin>>key;
    	head=pushElement(head,key);
	}

	display(head);
}
