#include <iostream>
using namespace std;

//Approach1
int main(){
    char a[100];
    int i=0, count=0;
    cin >> a;
    while(a[i]!='\0'){
        if(a[i]=='(') count++;
        else if(a[i]==')') count--;
        if(count<0) break;
        i++;
    }
    if(count==0) cout<<"Balanced";
    else cout<<"Not Balanced";
    return 0;
}    

//Approach 2                                                                                                                                                                      #include <iostream>
using namespace std;

int main(){
    char a[100], s[100];
    int top=-1, i=0, flag=1;
    cin >> a;
    while(a[i]!='\0'){
        if(a[i]=='(') s[++top]='(';
        else if(a[i]==')'){
            if(top==-1){ 
                flag=0; 
                break; 
            }
            top--;
        }
        i++;
    }
    if(top!=-1) flag=0;
    if(flag==1) cout<<"Balanced";
    else cout<<"Not Balanced";
    return 0;
}
