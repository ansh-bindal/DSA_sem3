# include <iostream>
using namespace std;

class node {

    public:

    int data;
    node* next;
};

node* head = NULL;

void insert_at_beg(int x){
    node* temp = new node;
    temp-> data = x;
    temp-> next = head;
    head=temp;
}

void reverse(){
    
    node* trav = head;
    node* curr;
    node* temp;
    temp = trav -> next;

    while( temp != NULL ){

        curr = trav;
        trav = temp;
        temp = trav -> next;
        trav -> next = curr;
      
    }

    head -> next = NULL;
    head = trav;
    
}

void print(){


  if( head ==NULL)
  cout<<"Empty List"<<endl;

    else{
    node* trav = head;

    while(trav != NULL)  
    {
        cout<< trav -> data;
        if ( trav -> next != NULL ) cout<<" -> ";
        trav = trav->next;
    }
  }

  cout<<endl;

 
}

int main(){

    for(int i=5 ; i>0 ; i--){

        insert_at_beg(i);

    }

    cout<<"Original List:"<<endl;
    print();
    reverse();
    cout<<"Reversed List:"<<endl;
    print();
    

}
