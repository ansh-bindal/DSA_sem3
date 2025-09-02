#include <iostream>
using namespace std;

int prec(char c){
    if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 2;
    if(c=='^') return 3;  
    return 0;
}

int main(){
    char a[100], stack[100];
    int top=-1, i=0;
    cout << "Enter a valid infix expression: ";
    cin >> a;
    while(a[i]!='\0'){
        if(a[i]>='a' && a[i]<='z') cout << a[i];
        else if(a[i]=='(') stack[++top] = '(';
        else if(a[i]==')'){
            while(stack[top]!='(') cout << stack[top--];
            top--; 
        }
        else{
            while(prec(stack[top])>=prec(a[i])) cout << stack[top--];
            stack[++top] = a[i];
        }
        i++;
    }
    cout << "\nPostfix expression: ";
    while(top!=-1) cout << stack[top--];
    return 0;
}
