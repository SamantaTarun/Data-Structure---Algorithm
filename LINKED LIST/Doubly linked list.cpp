#include<bits/stdc++.h>
using namespace std;

struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;


void Create(int A[],int n)
{
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node *));
	first->data=A[0];
	first->prev=first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
    	t=(struct Node *)malloc(sizeof(struct Node *));
    	t->data=A[i];
    	//t->next=last->next;
    	t->prev=last;
    	last->next=t;
    	last=t;
	}
}
int Length(struct Node *p)
{
	int len=0;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}
//Insert Before first Node
//Insert after any node
void insert(struct Node *p,int x,int pos)
{
	struct Node *t;
	
	if(pos<0||pos>Length(p))
	  return ;
	if(pos==0)
	{
		t=(struct Node *)malloc(sizeof(struct Node *));
		t->data=x;
		t->prev=NULL;
		t->next=first;
		first->prev=t;
		first=t;
		
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		
		}
		
		t=(struct Node *)malloc(sizeof(struct Node *));
		t->data=x;
		t->prev=p->next;
		
		if(p->next)
		 p->next->prev=t;
		p->next=t;
	}
}

void Display(struct Node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
	cout<<endl;
	
}

//Delete Befor first Node
//Delete at any position

int Delete(struct Node *p,int pos)
{
	int x;
    if(pos<1||pos>Length(p))
        return -1;
    if(pos==1)
    {
    	first=first->next;
    	
    	if(first)
    	  first->prev=NULL;
    	
    	x=p->data;
    	free(p);
    	
	}
	
	else
	{
		
		for(int i=0;i<pos-1;i++)
		  p=p->next;
		p->prev->next=p->next;
		
		if(p->next)
		  p->next->prev=p->prev;
		
		x=p->data;
		delete p;
		  
		
	}
	return x;
}
int main()
{
	int A[]={10,20,30,40,50};
	Create(A,5);
	
	Display(first);
	
	
	cout<<Length(first)<<endl;
	
	insert(first,25,5);
	Display(first);
	
	cout<<Delete(first,3)<<endl;
	Display(first);
	
	return 0;
}

