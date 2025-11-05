#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node(int d=0){
data=d;
next=NULL;
}
};

int size(node* &head){
if(head==NULL)return 0;
int c=1;
node* temp=head->next;
while(temp!=head){
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
b->next=c;
c->next=a;
node* head=a;
cout<<"Size of Circular Linked List:"<<size(head)<<endl;
return 0;
}
