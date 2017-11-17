#include <iostream>

using namespace std;


struct node

{
	int data;

	node *next;

};

class linkedList

{private:

node *head, *tail;

public :

linkedList()

{ head=NULL;

  tail=NULL;}

void addNode(int n)

{node *tmp = new node;

tmp->data=n;

tmp->next=NULL;


if(head==NULL)

{ head=tmp;

  tail=tmp;}

else

{
	tail->next=tmp;

	tail= tail->next;
}

}

};

main()
 
{

	linkedList a;
	
a.addNode(3);
	
a.addNode(4);

#include <iostream>

using namespace std;


struct node

{
	int data;

	node *next;

};

class linkedList

{private:

node *head, *tail;

public :

linkedList()

{ head=NULL;
 
 tail=NULL;}

void addNode(int n)

{node *tmp = new node;

tmp->data=n;

tmp->next=NULL;


if(head==NULL)

{ head=tmp;

  tail=tmp;}

else

{
	tail->next=tmp;

	tail= tmp;

}

}
void displayList()

{ if (head==NULL)

cout<<"The linked list is empty";
 
 else
 { node *tmp= head;
 
 while(tmp!=NULL)
 
 {cout<<tmp->data<<" ";
   
 tmp=tmp->next;
  	
  
}
 
 }

}

};

{
	linkedList a;

	a.addNode(3);

	a.addNode(4);

	a.displayList();

		return 0;
}}