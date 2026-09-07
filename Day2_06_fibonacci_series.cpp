#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number of terms: ";
    cin >> a;

    int b = 0;
    int c = 1;
    int d;

    for (int i = 1; i <= a; i++) {
        cout << b << " ";
        d = b + c;
        b = c;
        c = d;
    }
    cout << endl;

    return 0;
}