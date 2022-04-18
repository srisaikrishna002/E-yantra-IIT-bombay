#include<iostream>
using namespace std;
class stack
{
int top,a[5];
public: stack()
{
top=-1;
}
bool isEmpty()
{
if(top==-1)
{
return true; }
else {
return false; }}
bool isFull() {
if(top==4) {
return true; }
else {
return false; }}
void push(int item) {
if(isFull()) {
cout<<"stack overflow"<<endl; }
else {
top++;
a[top]=item; }}
void pop() {
if(isEmpty()) {
cout<<"stack underflow"<<endl; }
else {
cout<<"The popped element is"<<a[top]<<endl;
top--
;
}}
void display() {
if(top>=0) {
for(int i=top;i>=0;i--
)
{
cout<<a[i]<<endl;
}
}
else
{
cout<<"stack is empty"<<endl;;
}
}
void count()
{
cout<<"Number of elements in the stack are:"<<top+1<<endl;
}
void peek(int index)
{
cout<<"the value in the "<<index<<" index is "<<a[index]<<endl;
}
void change(int index,int value)
{
a[index]=value;
}
};
int main()
{
stack s;
int option,item,index;
do
{
cout<<"choose an option:"<<endl;
cout<<"1.isEmpty()"<<endl;
cout<<"2.isFull()"<<endl;
cout<<"3.push()"<<endl;
cout<<"4.pop()"<<endl;
cout<<"5.count()"<<endl;
cout<<"6.display()"<<endl;
cout<<"7.peek()"<<endl;
cout<<"8.change()"<<endl;
cin>>option;
switch(option)
{
case 1: if(s.isEmpty())
cout<<"stack is empty"<<endl;
else
cout<<"stack is not empty"<<endl;
break;
case 2: if(s.isFull())
cout<<"stack is full"<<endl;
else
cout<<"stack is not full"<<endl;
break;
case 3: cout<<"enter an item to push:"<<endl;
cin>>item;
s.push(item);
break;
case 4: s.pop();
break;
case 5: s.count();
break;
case 6: cout<<"Elements in the stack are:"<<endl;
s.display();
break;
case 7:cout<<"Enter index number u want to display:"<<endl;
cin>>index;
s.peek(index);
break;
case 8: cout<<"enter the index number and value which u want to change:" <<endl;
cin>>index>>item;
s.change(index,item);
break;
default: cout<<"choose correct option"<<endl;
}
}while(option!=0);
}

