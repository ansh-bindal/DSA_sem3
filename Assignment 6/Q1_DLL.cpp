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

void insert_at_beg(node* &head,int x){
node* n=new node;
n->data=x;
if(head==NULL){
head=n;
return;
}
n->next=head;
head->prev=n;
head=n;
}

void insert_at_end(node* &head,int x){
node* n=new node;
n->data=x;
if(head==NULL){
head=n;
return;
}
node* temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=n;
n->prev=temp;
}

void insert_at_pos(node* &head,int pos,int x){
if(pos==1){
insert_at_beg(head,x);
return;
}
node* temp=head;
while(pos>2&&temp->next!=NULL){
temp=temp->next;
pos--;
}
node* n=new node;
n->data=x;
n->next=temp->next;
if(temp->next!=NULL)
temp->next->prev=n;
temp->next=n;
n->prev=temp;
}

void delete_at_beg(node* &head){
if(head==NULL){
cout<<"Empty\n";
return;
}
node* temp=head;
head=head->next;
if(head!=NULL)
head->prev=NULL;
delete temp;
}

void delete_at_end(node* &head){
if(head==NULL){
cout<<"Empty\n";
return;
}
if(head->next==NULL){
delete head;
head=NULL;
return;
}
node* temp=head;
while(temp->next->next!=NULL)
temp=temp->next;
delete temp->next;
temp->next=NULL;
}

void delete_at_pos(node* &head,int pos){
if(head==NULL){
cout<<"Empty\n";
return;
}
if(pos==1){
delete_at_beg(head);
return;
}
node* temp=head;
while(pos>2&&temp->next!=NULL){
temp=temp->next;
pos--;
}
node* del=temp->next;
if(del==NULL)return;
temp->next=del->next;
if(del->next!=NULL)
del->next->prev=temp;
delete del;
}

void search(node* &head,int x){
if(head==NULL){
cout<<"Empty\n";
return;
}
node* temp=head;
int pos=1;
while(temp!=NULL&&temp->data!=x){
temp=temp->next;
pos++;
}
if(temp!=NULL)
cout<<"Found at pos:"<<pos<<"\n";
else
cout<<"Not Found\n";
}

void display(node* &head){
if(head==NULL){
cout<<"Empty\n";
return;
}
node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<"\n";
}

int main(){
node* head=NULL;
int choice,val,pos;
do{
cout<<"Menu:\n";
cout<<"1.Insert at Beginning\n";
cout<<"2.Insert at End\n";
cout<<"3.Insert at Position\n";
cout<<"4.Delete at Beginning\n";
cout<<"5.Delete at End\n";
cout<<"6.Delete at Position\n";
cout<<"7.Search\n";
cout<<"8.Display\n";
cout<<"Enter your choice (9 to exit):";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter value:";
cin>>val;
insert_at_beg(head,val);
break;
case 2:
cout<<"Enter value:";
cin>>val;
insert_at_end(head,val);
break;
case 3:
cout<<"Enter position and value:";
cin>>pos>>val;
insert_at_pos(head,pos,val);
break;
case 4:
delete_at_beg(head);
break;
case 5:
delete_at_end(head);
break;
case 6:
cout<<"Enter position:";
cin>>pos;
delete_at_pos(head,pos);
break;
case 7:
cout<<"Enter value to search:";
cin>>val;
search(head,val);
break;
case 8:
display(head);
break;
default:
if(choice!=9)
cout<<"Invalid choice\n";
}
}while(choice!=9);
return 0;
}
