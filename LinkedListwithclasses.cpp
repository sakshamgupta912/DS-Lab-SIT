#include <bits/stdc++.h>

using namespace std;

class Node
{
	int data;
	
	Node* next;
	public:
	Node()
	{
		next= NULL;
	}
	Node(int d)
	{
		data=d;
		next=NULL;
	}
	
	friend class List;
};

class List
{	
	Node* head;
	public:
	List()
	{
		head=NULL;
	}
	void display();
	void insertend(int);
	void insertbeg(int);
	void insertindex(int, int);
	
	void deletebeg();
	void deleteend();
	void deleteindex(int);
	
	void reverse();
	
	void operator +(List &obj);
	
	void concat(List &obj);
	
};
void List::concat(List &obj)
{
	Node* head2=obj.head;
	
	Node* list1last=head;
	
	while(list1last->next!=NULL)
		list1last=list1last->next;
	
	list1last->next=head2;
	
}
void List::display()
{	Node* current=head;
	while(current!=NULL)
	{
		cout<<current->data<<endl;
		current=current->next;
	}
}

void List::insertend(int d)
{
	Node* newnode=new Node(d);
	Node* last=head;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next= newnode;
	
}

void List::insertbeg(int d)
{
	Node* newnode=new Node(d);
	
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	newnode->next=head;
	head=newnode;
	
}

void List::insertindex(int index,int d)
{
	Node* current=head;
	Node* newnode=new Node(d);
	
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	for(int i=0;i<index-1;i++)
	{
		current=current->next;
	}
	
	newnode->next=current->next;
	current->next=newnode;	
}

void List::deleteend()
{
	Node* current=head;
		if(head==NULL)
	{
		
		cout<<"Empty Linked List\n" ;
		return;
	}
	while(current->next->next!=NULL)
	{
		current=current->next;
	}
	delete(current->next);
	current->next=NULL;	
}

void List:: deletebeg()
{
	Node* temp=head;
	head=head->next;
	delete temp;
}
void List::deleteindex(int index)
{
	Node* current=head;
	
	if (index==0)
		{
			deletebeg();
			return;
		}
	for(int i=0;i<index-1;i++)
	{	
		if(current==NULL)
		{
			cout<<"OUT OF BOUND\n";
			break;
		}
		
		current=current->next;	
			
	}
	
	Node* temp= current->next;
	current->next=current->next->next;
	delete temp;
	
}

void List::reverse()
{
	Node* prev=NULL,*current,*next=NULL;
	current=head;
	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	
}

void List::operator +(List &obj)
{
	Node* head2=obj.head;
	
	Node* list1last=head;
	
	while(list1last->next!=NULL)
		list1last=list1last->next;
	
	list1last->next=head2;
	
	
}


int main()
{
	List L1;
	L1.insertend(1);
	L1.insertend(2);
	L1.insertend(3);
	L1.insertend(4);
	L1.insertend(5);
	
	L1.reverse();
	List L2;
	L2.insertend(1);
	L2.insertend(2);
	L2.insertend(3);
	L2.insertend(4);
	L2.insertend(5);
	
	
	L1.concat(L2);// concationation in L1
	
	L1.display();
}



