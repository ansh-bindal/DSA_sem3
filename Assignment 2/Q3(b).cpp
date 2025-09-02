#include <iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,7,8,9,10};
    int n = 10;
    int low=0, high=n-2, ans=n;
    while(low <= high){
        int mid=(low+high)/2;
        if(a[mid] == mid+1) 
            low = mid+1;
        else{
            ans = mid+1;
            high = mid-1;
        }
    }
    cout << ans;
}
