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

void insert_at_beg(node* &head,int x){
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
n->next=head;
temp->next=n;
head=n;
}
}

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

void insert_at_pos(node* &head,int pos,int x){
if(pos==1){
insert_at_beg(head,x);
return;
}

node* temp=head;
while(pos>2 && temp->next!=head){
temp=temp->next;
pos--;
}
node* n=new node;
n->data=x;
n->next=temp->next;
temp->next=n;
}

void delete_at_beg(node* &head){
if(head==NULL){
cout<<"Empty\n";
return;
}

if(head->next==head){
delete head;
head=NULL;
return;
}

node* temp=head;
while(temp->next!=head)
temp=temp->next;
node* temp2=head;
head=head->next;
temp->next=head;
delete temp2;
}

void delete_at_end(node* &head){
if(head==NULL){
cout<<"Empty\n";
return;
}

if(head->next==head){
delete head;
head=NULL;
return;
}

node* temp=head;
while(temp->next->next!=head)
temp=temp->next;
node* del=temp->next;
temp->next=head;
delete del;
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
while(pos>2 && temp->next!=head){
temp=temp->next;
pos--;
}
node* temp2=temp->next;
temp->next=temp->next->next;
delete temp2;
}

void search(node* &head,int x){
if(head==NULL){
cout<<"Empty\n";
return;
}
node* temp=head;
int pos=1;
while(temp->data!=x && temp->next!=head){
temp=temp->next;
pos++;
}
if(temp->data==x)
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
while(temp->next!=head){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<temp->data<<"(back to head)\n";
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
