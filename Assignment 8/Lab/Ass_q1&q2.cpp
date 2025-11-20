#include<iostream>
using namespace std;

class node{
public:
int data;
node* left;
node* right;
node(int d):data(d){
    left=nullptr;
    right=nullptr;
}
};

class bt{
public:
node* root;
bt(){root=nullptr;}
node* create(int x=0){return new node(x);}
node* construct(node* p){
    cout<<"Enter value to insert\n";
    int x;
    cin>>x;
    node* n=new node(x);
    cout<<"To insert at left of "<<x<<" enter y\n";
    char ch;
    cin>>ch;
    if(ch=='y')
    n->left=construct(n);
    cout<<"To insert at right of "<<x<<" enter y\n";
    cin>>ch;
    if(ch=='y')
    n->right=construct(n);
    return n;
}
};

class bst{
public:
node* root;
bst(){root=nullptr;}
void insert(int val){
    node* n=new node(val);
    if(root==nullptr){root=n;return;}
    node* curr=root;
    node* parent=nullptr;
    while(curr!=nullptr){
        parent=curr;
