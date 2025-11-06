#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool flag = true;
    for (int i = 1; i < n; i++) {
        if (a[i-1] > a[i]) {
            flag = false;
        }

    }
    if (flag) {
        cout<< "Sorted";
    } else {
        cout<< "Not Sorted";
    }

}