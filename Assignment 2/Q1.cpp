#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 5, 7, 8, 11, 17};
    int n = 6;
    int x;
    cout << "Enter element to find: ";
    cin >> x;

    int low = 0, high = n - 1;
    int result = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(a[mid] == x) {
            result = mid;
            break;
        } else if(a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
