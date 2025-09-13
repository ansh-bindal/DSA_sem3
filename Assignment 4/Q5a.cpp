#include<iostream>
using namespace std;

int arr1[100], arr2[100];
int f1=0,r1=0;
int f2=0,r2=0;

void push(int x){
    arr1[r1++]=x;
}

int pop(){
    while(r1-f1>1){
        arr2[r2++]=arr1[f1++];
    }
    int val=arr1[f1++];
    f1=0;
    r1=0;
    while(f2<r2){
        arr1[r1++]=arr2[f2++];
    }
    f2=0;
    r2=0;
    return val;
}

int main(){
    push(1);
    push(2);
    push(3);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    return 0;
}
