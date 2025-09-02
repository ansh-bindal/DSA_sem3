#include <iostream>
using namespace std;
int main(){
    int a[] = {3, 4, 2, 3, 7, 5};
  
    int count = 0;

    for(int i=0; i<=5; i++){
        for(int j=i+1; j<=5; j++){
            if(a[i] > a[j]){
                count++;
            }
        }
    }

    cout << "Number of Inversions: " << count;
}
