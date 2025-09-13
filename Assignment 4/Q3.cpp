#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of queue: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int half=n/2;
    int ans[100];
    int j=0,k=half,idx=0;
    while(j<half && k<n) {
        ans[idx]=arr[j];
        idx++;
        ans[idx]=arr[k];
        idx++;
        j++;
        k++;
    }
    if(n%2!=0) {
        ans[idx]=arr[n-1];
        idx++;
    }
    for(int i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
