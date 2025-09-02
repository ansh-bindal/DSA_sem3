#include <iostream>
using namespace std;
int main(){
    char a[100] = "Ansh Bindal";
    int i = 0;
    while(a[i] != '\0'){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
           a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            
            int j = i;
            while(a[j] != '\0'){
                a[j] = a[j+1];   
                j++;
            }
            i--;  
        }
        i++;
    }
    cout << a;
}
