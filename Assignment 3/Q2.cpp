#include <iostream>
using namespace std;

int main(){
    char a[100] = "DataStructure";
    char s[100];
    int top=-1,i=0;
  
    while(a[i]!='\0'){
        s[++top]=a[i];
        i++;
    }
    while(top!=-1){
        cout<<s[top--];
    }
    return 0;
}
