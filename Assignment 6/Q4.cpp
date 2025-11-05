#include<iostream>
using namespace std;

class node{
public:
char data;
node* next;
node* prev;
node(char d='0'){
data=d;
next=NULL;
prev=NULL;
}
};

bool check(node* &head){
if(head==NULL)return true;
node* start=head;
node* end=head;
while(end->next!=NULL)
end=end->next;
while(start!=end&&end->next!=start){
if(start->data!=end->data)
return false;
start=start->next;
end=end->prev;
}
return true;
}

int main(){
node* a=new node('l');
node* b=new node('e');
node* c=new node('v');
node* d=new node('e');
node* e=new node('l');
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
c->next=d;
d->prev=c;
d->next=e;
e->prev=d;
node* head=a;
if(check(head))
cout<<"True\n";
else
cout<<"False\n";
return 0;
}
