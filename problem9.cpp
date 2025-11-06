#include <iostream>
using namespace std;
int main() {
    int r,c;
    cout<<"Enter a size of a matrix (r*c): ";
    cin>>r;
    cin>>c;
    int a[r][c];
    int b[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>> a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>> b[i][j];
        }
    }
    int d[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            d[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << d[i][j]<<" ";
        }
        cout << endl;
    }
}