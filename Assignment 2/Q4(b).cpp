#include <iostream>
using namespace std;
int main(){
    char a[100] = "Ansh";
    int i = 0;
    while(a[i] != '\0') i++;  
    int n = i;              
    
    for(int j = 0; j < n/2; j++){ 
        char temp = a[j];
        a[j] = a[n-j-1];
        a[n-j-1] = temp;
    }
    
    cout << a;
}
