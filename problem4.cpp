#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> unique_elements(a.begin(), a.end());
    cout << "Unique=" << unique_elements.size() << std::endl;

}