#include <iostream>
using namespace std;
int main() {
    int a[] = {1,2,3,4,5,7,8,9,10};
    int n = 10;
    int ans = n;
    for(int i=0;i<n-1;i++){
        if(a[i] != i+1){
            ans = i+1;
            break;
        }
    }
    cout<<ans;
}
