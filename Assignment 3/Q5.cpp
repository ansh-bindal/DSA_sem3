#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char str[100];
    int stack[100], top=-1, i=0, a, b;
    cin >> str;
    while(str[i]!='\0') {
        if(str[i]>='0' && str[i]<='9') stack[++top] = str[i]-'0';
        else {
            b = stack[top--];
            a = stack[top--];
            if(str[i]=='+') stack[++top] = a+b;
            if(str[i]=='-') stack[++top] = a-b;
            if(str[i]=='*') stack[++top] = a*b;
            if(str[i]=='/') stack[++top] = a/b;
            if(str[i]=='^') stack[++top] = pow(a,b);
        }
        i++;
    }
    cout << stack[top];
    return 0;
}
