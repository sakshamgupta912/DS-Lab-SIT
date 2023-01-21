#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

class CreateNode: public Node
{	public:
//	Node *N=(Node *)malloc(sizeof(Node));
	
		CreateNode()
	{
		data=NULL;
		next=NULL;
	}
		CreateNode(int d,Node * nextAddress)
	{
		data=d;
		next=nextAddress;
	}
};

int main()
{
	Node* head=NULL;
	CreateNode obj;
	
	
	int choice;
	do
	{
		cout<<"Enter your choice:\n";
		cout<<"1 to create\n2 to display\n3 to insert\n4 to delete\n5 to print linked list\nEnter -1 to exit\n";
		cin>>choice;
	
	switch(choice)
	{
	
		case 1:
			{	
				cout<<"Enter the data of the Node: ";
				int data;
				cin>>data;
				
				
				break;
					
			}
		case 2:
			{
				break;
					
			}
		case 3:
			{
				break;
					
			}
		case 4:
			{
				break;
					
			}
		default:
			cout<<"Wrong choice";
	}
		}while(choice!=-1);
}
