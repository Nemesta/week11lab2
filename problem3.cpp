#include <iostream>
using namespace std;
int main() {
    int n = 1;
    int odd = 0, even = 0;
    while (n >= 0) {
        cout <<  " Enter a number: ";
        cin >> n;
        if (n%2 == 0 ) {
            even++;
        } else if (n%2 == 1 ) {
            odd++;
        }
    }
    cout<< "Even=" << even << " Odd=" << odd << endl;

}