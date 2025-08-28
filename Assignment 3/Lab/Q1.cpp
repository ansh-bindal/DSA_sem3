#include <iostream>
using namespace std;

int top = -1;

void peek(int stack[]){
	
	 if(top>-1)
	 	cout<<stack[top]<<endl;
	 	else
	 	cout<<"Not Possible"<<endl;
	 
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
	
	 if(top<n-1)
	stack[++top]=x;
	else
	cout<<"Not Possible"<<endl;
}

void pop(int stack[]){
	
	if (top!=-1)
		
		top--;
		else
	    cout<<"Not Possible"<<endl;
	
}

void display(int stack[]){
	
	for (int i=top;i>-1;i--)
	cout<<stack[i]<<endl;
}

int main(){
	

    int n;
    cout<<"Enter Maximum Length"<<endl;
	cin>>n;
	int S[n];
	
	push(S,n,10);
	pop(S);
	pop(S);
	
	
}
