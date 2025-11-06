#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a size of matrix(a*a): ";
    cin >> n;
    int b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + b[i][i];
    }
    int sum2[n];
    for (int i = 0; i < n; i++) {
        sum2[i]=0;
    }
    bool flag = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            sum2[i] = sum2[i] + b[i][j];
        }
    }
    int sum3[n];
    for (int i = 0; i < n; i++) {
        sum3[i]=0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum3[i] = sum3[i] + b[j][i];
        }
    }
    int last = 0;
    int count = n-1;
    for (int i = 0; i < n; i++) {
        last = last + b[count][i];
        count--;
    }
    for (int i = 0; i < n; i++) {
        if (sum2[i] != sum) {
            flag = false;
        }
    for (int j = 0; j < n; j++) {
        if (sum3[j] != sum) {
            flag = false;
        }
    }
    }
    if (last != sum) {
        flag = false;
    }
    if (flag) {
        cout<<"Magic Square";

    }else {
        cout<<"Not Magic Square";
    }
    return 0;
}