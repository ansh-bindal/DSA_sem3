#include<iostream>
using namespace std;

int arr[100];
int f=0,r=0;

void push(int x){
    arr[r++]=x;
}

int pop(){
    int n = r - f;
    if(n==0) return -1;
    for(int i=0;i<n-1;i++){
        arr[r++]=arr[f++];
    }
    return arr[f++];
}

int main(){
    push(1);
    push(2);
    push(3);

    cout<<pop()<<endl;
    cout<<pop()<<endl;

    return 0;
}
