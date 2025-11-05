#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* prev;
node(int d=0){
data=d;
next=NULL;
prev=NULL;
}
};

int size(node* &head){
int c=0;
node* temp=head;
while(temp!=NULL){
c++;
temp=temp->next;
}
return c;
}

int main(){
node* a=new node(10);
node* b=new node(20);
node* c=new node(30);
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
node* head=a;
cout<<"Size of Doubly Linked List:"<<size(head)<<endl;
return 0;
}
