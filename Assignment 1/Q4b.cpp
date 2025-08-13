#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows of first matrix: ";
    cin >> r1;
    cout << "Enter columns of first matrix: ";
    cin >> c1;
    cout << "Enter rows of second matrix: ";
    cin >> r2;
    cout << "Enter columns of second matrix: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    int a[20][20], b[20][20], c[20][20];

    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Final matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
