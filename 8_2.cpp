#include <iostream>
using namespace std;
#define SIZE 10
static int top=-1;
class stack
{
private:
int ar[SIZE];
public:
void push(int item);
void pop();
void display();
};
void stack::push(int item)
{
if(top==SIZE-1)
cout<<"\nThe stack is full";
else
{ar[++top]=item;
cout<<"\nElement successfully pushed in the stack";
}
}
void stack::pop()
{
if(top<0)
cout<<"\nStack under folw";
else
{top--;
cout<<"\nElement successfully popped from the stack";
}
}
void stack::display()
{if(top==-1)
cout<<"\nThe stack is empty,cannot be displayed";
else
for(int i=top;i>=0;i--)
cout<<ar[i]<<"";
}
main(){
char choice;
int ch,num;
stack ob;
do{
cout<<"\n\n\t\t\tSTACK OPERATIONS";
cout<<"\n\n1.PUSH";
cout<<"\n2.POP";
cout<<"\n3.DISPLAY";
cout<<"\n4.EXIT";
cout<<"\n\nEnter your choice";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter the element you want to push";
cin>>num;
ob.push(num);
break;
case 2:
ob.pop();
break;
case 3:
ob.display();
break;
case 4:
exit(0);
default: cout<<"\nPlease enter a valid choice(1-4)";
}
cout<<"\nDo you want to continue(Y/N)";
cin>>choice;
}
while(choice=='y' || choice=='Y');
return 0;
}