# include<iostream>
using namespace std;

class node {

    public:

    int data;
    node* next;
};

node* head = NULL;

void insert_at_beg(){
    node* temp = new node;
    cout<<"Enter Data"<<endl;
    int x;
    cin>>x;
    temp-> data = x;
    temp-> next = head;
    head=temp;
}

void insert_at_end(){
    if(head==NULL)
    insert_at_beg();
    else{
    node* trav = head;
    while( trav -> next != NULL){
        trav = trav-> next;
    }

    node* temp = new node;
    cout<<"Enter Data"<<endl;
    int x;
    cin>>x;
    temp-> data = x;
    trav -> next = temp;
    temp -> next =  NULL;

}
}

void print(){

    if(head!= NULL){
    node* trav = head;
    while(trav != NULL)  
    {
        cout<< trav -> data<<endl;
        trav = trav->next;
    }
  }
  else
  cout<<"Empty List";
}

void search(){

   
    if(head == NULL){

        cout<<"Empty List"<<endl;
        return;

    }

    int idx,x;
    idx=1;
    cout<<"Enter node to search"<<endl;
    cin>>x;

     node* trav = head;

    while(trav != NULL){

        if( trav -> data == x){
        cout<<"Element "<<x<<" found at position = "<<idx<<" from head"<<endl;
        return;
        }

        trav = trav -> next;
        idx++;

    }

    cout<<"Element " << x << " not found in the list" << endl;


}

void insert_at_pos(){

cout<<"Enter position"<<endl;
int pos; cin>> pos;

    if(pos==1) { 
        insert_at_beg(); 
        return;
    }
    

    node* trav = head;
    for(int i=0 ; i<(pos-2) ; i++){

        if( trav == NULL){
         
        cout<<"Position is out of range"<<endl;
        return;
    }

        trav = trav-> next;
    
}

    
    node* temp = new node;

    cout<<"Enter value"<<endl;
    int x; cin>>x;
    temp -> data = x;
    temp -> next = trav -> next;
    trav -> next = temp;


}

void delete_at_beg(){
        
    if(head==NULL) return;
    int val = head -> data;
    node* temp = head;
    head = head -> next;
    delete temp;
    cout<<"Deleted element is "<<val<<" "<<endl;

}

void delete_at_end(){

    if(head==NULL) return;
    if(head -> next == NULL){
        cout<<"Deleted value is "<<head -> data<<" "<<endl;
        delete head;
        head = NULL;
        return;
    }

    node* trav = head;

    while((trav -> next) -> next != NULL)
    trav = trav -> next;

    node* temp = trav -> next;
    trav -> next = NULL;

    int val = temp -> data;
    delete temp;

    cout<<"Deleted element is "<<val<<" "<<endl;

}

void delete_at_pos(){

    cout<<"Enter position"<<endl;
    int pos; cin>> pos;


    if(head==NULL) return;

    if(pos==1){

    int val = head -> data;
    node* temp = head;
    if(head -> next != NULL)
    head = head -> next;
    else
    head = NULL;
    delete temp;
    cout<<"Deleted element is "<<val<<" "<<endl;

    return;

    }

      node* trav = head;

    for(int i=0 ; i<(pos-2) ; i++){

        if(trav==NULL){

            cout<<"Out of range"<<endl;
            return;

        }

        trav = trav -> next;
        
    }

    node* temp = trav -> next;
    int val = temp -> data;
    trav -> next = temp -> next;
    delete temp;

    cout<<"Deleted element is "<<val<<" "<<endl;

}

int main(){

    cout<< "MENU : "<<endl<<" 1 -> Insertion at the beginning"<<endl<<" 2 -> Insertion at the end"<<endl<<" 3 -> Insertion in between"<<endl<<" 4 -> Deletion from the beginning"<<endl<<" 5 -> Deletion from the end"<<endl<<" 6 -> Deletion of a specific node"<<endl<<" 7 -> Search for a node and display its position from head"<<endl<<" 8 -> Display all the node values"<<endl<<" 9 -> Exit from menu program"<<endl<<endl;

    int choice;

    while(true){

    cout<<"Enter Choice:"<<endl;
    cin>>choice;

    switch(choice){

        case 1 : insert_at_beg(); break;
        case 2 : insert_at_end(); break;
        case 3 : insert_at_pos(); break;
        case 4 : delete_at_beg(); break;
        case 5 : delete_at_end(); break;
        case 6 : delete_at_pos(); break;
        case 7 : search(); break;
        case 8 : print(); break;
        case 9 : cout<<"Menu Program Exited"<<endl; return 0;

        default : cout<<"Invalid Choice"<<endl;
    }
    }

}
