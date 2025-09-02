#include <iostream>
using namespace std;
int main(){
    int a[7] = {1,2,3,3,2,2,1};

    int count= 0; 
    for(int i=0; i<7; i++){ 
        int flag = 0;
        for(int j=0; j<i; j++){
            if(a[i] == a[j]) flag = 1;
        }
        if(flag == 0) count++; 
    }
    cout << "Distinct Elements: " << count; 
}
