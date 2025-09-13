#include <iostream>
using namespace std;

int arr[100], front = -1, rear = -1;

void enqueue(int n) {
    if((front == 0 && rear == n-1) || (rear == (front-1)%(n-1))) {
        cout<<"Full"<<endl;
        return;
    }
    int x;
    cout<<"Enter element to insert: ";
    cin>>x;
    if(front == -1) {
        front = 0;
        rear = 0;
    }
    else if(rear == n-1 && front != 0) {
        rear = 0;
    }
    else {
        rear++;
    }
    arr[rear] = x;
}

void dequeue(int n) {
    if(front == -1) {
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Deleted: "<<arr[front]<<endl;
    if(front == rear) {
        front = -1;
        rear = -1;
    }
    else if(front == n-1) {
        front = 0;
    }
    else {
        front++;
    }
}

void display(int n) {
    if(front == -1) {
        cout<<"Empty"<<endl;
        return;
    }
    if(rear >= front) {
        for(int i = front; i <= rear; i++) {
            cout<<arr[i]<<" ";
        }
    }
    else {
        for(int i = front; i < n; i++) {
            cout<<arr[i]<<" ";
        }
        for(int i = 0; i <= rear; i++) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

void peek() {
    if(front == -1) {
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Front: "<<arr[front]<<endl;
}

void isEmpty() {
    if(front == -1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

void isFull(int n) {
    if((front == 0 && rear == n-1) || (rear == (front-1)%(n-1))) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main() {
    int n;
    cout<<"Enter size of queue: ";
    cin>>n;
    int ch;
    cout<<"1->Enqueue"<<endl;
    cout<<"2->Dequeue"<<endl;
    cout<<"3->Display"<<endl;
    cout<<"4->Peek"<<endl;
    cout<<"5->isEmpty"<<endl;
    cout<<"6->isFull"<<endl;
    cout<<"Enter choice: ";
    cin>>ch;
    switch(ch) {
        case 1: enqueue(n); break;
        case 2: dequeue(n); break;
        case 3: display(n); break;
        case 4: peek(); break;
        case 5: isEmpty(); break;
        case 6: isFull(n); break;
        default: cout<<"Invalid Choice"<<endl;
    }
}
