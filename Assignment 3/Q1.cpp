#include <iostream>
using namespace std;

int top = -1;

void peek(int stack[]){
	
	 if(top>-1)
	 	cout<<stack[top]<<endl;
	 	else
	 	cout<<" Peek Operation Not Possible"<<endl;
	 
}
	
void isEmpty(int stack[]){
	
	if(top==-1)
		cout<<"Empty Stack"<<endl;
		 else
	    cout<<"Not Empty"<<endl;
	

}

void isFull(int stack[],int n){
	
	 if(top==n-1)
	 cout<<"full"<<endl;
	 else
	 cout<<"Not Full"<<endl;
}

void push(int stack[],int n,int x){
	
	 if(top<n-1){
	 cout<<"Element "<<x<<" pushed"<<endl;
	stack[++top]=x;}
	else
	cout<<"Push Operation Not Possible"<<endl;
}

void pop(int stack[]){
	
	if (top!=-1){
	    cout<<"Element popped"<<endl;
		top--;}
		else
	    cout<<"Pop Operation Not Possible"<<endl;
	
}

void display(int stack[]){
	cout<<"All Elements:"<<endl;
	for (int i=top;i>-1;i--)
	cout<<stack[i]<<endl;
}

int main(){
	
	int choice,element;

    int n;
    cout<<"Enter Maximum Length"<<endl;
	cin>>n;
	int S[n];
	
	cout<<"Menu:"<<endl<<"1-> Push"<<endl<<"2-> Pop"<<endl<<"3-> Check if stack is empty"<<endl<<"4-> Check if stack is full"<<endl<<"5-> Display stack"<<endl<<"6-> Peek"<<endl;
	
	cout<<"Enter Choice"<<endl;
	cin>>choice;
	
	switch(choice){
		
		case 1 : cout<<"Enter element to push"<<endl;
	           	cin>>element;
		        push(S,n,element);
		        break;
		        
		case 2 : pop(S);
	        	break;
		
		case 3 : isEmpty(S);
		         break;
		case 4 : isFull(S,n);
		         break;
		case 5 : display(S);
		         break;
		case 6 : peek(S);
		         break;
	}
	
	
	
}
