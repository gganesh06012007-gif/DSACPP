#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int b = 0;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            b = b + 1;
            
        }
    }

    if (b >=1) {
        cout << a << " is not a prime" << endl;
    } else {
        cout << a << " is  a prime" << endl;
    }

    return 0;
}