#include <iostream>
using namespace std;
int main() {
    int dub;
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dub = a[0];
    c.push_back(dub);
    for (int i = 1; i < n; i++) {
        if (a[i] != dub) {
            dub = a[i];
            c.push_back(dub);
        }
    }
    for (int i = 0; i < c.size(); i++) {
        cout << c[i]<< " ";
    }


}