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

int delete_occurences(){

    int x,count;
    count = 0;
    cout<<"Enter key"<<endl;
    cin>>x;

    if(head==NULL){
        
        cout<<"Empty List"<<endl;
        return count;
    
    }


    node* trav = head; 

    while(trav != NULL && trav -> next != NULL){

        

        if(trav -> next -> data == x){

            count++;
            node* temp = trav -> next;
            trav -> next = temp -> next;
            delete temp;

        }

        trav = trav -> next;

    }

    if(head -> data == x){

        count++;
        node* temp = head;
        head = temp -> next;
        delete temp;

    }

    return count;

}

int main(){

    for(int i=5 ; i>0 ; i--){

        insert_at_beg(i);
        insert_at_beg(10);

    }

    cout<<"Original List:"<<endl<<endl;
    print();
    int count = delete_occurences();
    cout<<"No. of Occurences of the entered key:"<<count<<endl<<endl;
    cout<<"Updated List:"<<endl;
    print();
    

}
