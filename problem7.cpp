#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxi]) {
            maxi = i;
        }
    }
    cout << maxi;
    return 0;

}