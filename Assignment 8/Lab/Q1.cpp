# include<iostream>
using namespace std;

	
	void inorder(int tree[], int n, int i) {
    if (i >= n || tree[i] == -1)
        return;

    inorder(tree, n, 2*i + 1);  
    cout << tree[i] << " ";    
    inorder(tree, n, 2*i + 2);  
	
}

int main(){
	
	int n;
	cout<<"Enter no. of nodes"<<endl;
	cin>>n;
	
	int tree[2*n-1];
	
	for (int i=0; i<2*n-1; i++)
	tree[i]=-1;
	
		cout<<"Enter values for given indexes ( enter -1 if no node exists) "<<endl;
		
	for (int i=0; i<2*n-1; i++){	
		
		if(i==0){
		
		cout<<"Root:";
		cin>>tree[i];
			
		}
		else{
			 int p = (i - 1) / 2;
			  if(tree[p] == -1) continue;
			 if (i== 2*p +1)
			cout<<"Left of  "<< tree[p]<<":";
			else
			cout<<"Right of  "<< tree[p]<<":";
			cin>>tree[i];
				
		}
		
	}
	
	cout<<endl<<"Tree Structure :"<<endl;
	
	for(int i=0;i<2*n-1;i++){
		
		if (i==0)
		cout<<"Root :"<<tree[0]<<endl;
		
	
			if((2*i+1)<n && tree[2*i+1]!= -1)
			cout<<"left of  "<<tree[i]<<" is "<<tree[2*i+1]<<endl;
			if((2*i+2)<n && tree[2*i+2]!= -1)
			cout<<"Right of "<<tree[i]<<" is "<<tree[2*i+2]<<endl;
			
			
		}
		cout<<"	Inorder Traversal : "<<endl;
		inorder(tree,2*n-1,0);
}
