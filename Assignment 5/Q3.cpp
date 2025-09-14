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

void print_middle(){

    int count;

    node* trav = head;
    while( trav != NULL ){

        count++;
        trav = trav -> next;

    }

    trav = head;

    if( count % 2 != 0 ){

        for(int i=1 ; i<= count/2 ; i++){

            trav = trav -> next;

        }

        cout<<"Middle element is "<<trav -> data<<endl;

    }

    else{

        for(int i=1 ; i < count/2 ; i++){

            trav = trav -> next;

        }

        cout<<"Middle elements are "<<trav -> data<<" and "<<trav -> next -> data<<endl;


    }

}

int main(){

    for(int i=5 ; i>0 ; i--){

        insert_at_beg(i);

    }

    cout<<"Original List:"<<endl;
    print();
    print_middle();
    

}
