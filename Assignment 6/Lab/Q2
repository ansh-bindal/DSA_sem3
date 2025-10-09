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

void insert_at_end(node* &head,int x){
node* n = new node;
n->data=x;

if(head==NULL){
head=n;
head->next=head;
}

else{
node* temp=head;
while(temp->next!=head)
temp=temp->next;
temp->next=n;
n->next=head;
}
}

void display(node* &head){
if(head==NULL){
cout<<"Empty\n";
return;
}
node* temp=head;
while(temp->next!=head){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<temp->data<<" "<<head->data<<"\n";
}

int main(){
node* head=NULL;
insert_at_end(head,20);
insert_at_end(head,100);
insert_at_end(head,40);
insert_at_end(head,80);
insert_at_end(head,60);
display(head);
return 0;
}
