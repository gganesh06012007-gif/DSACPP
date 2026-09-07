#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number: ";
    cin >> a;
    int b=0;
    for (int i = 1; i <= a;  i++) {
        cout << b << " ";
        b=b+2;
    }
    cout << endl;

    return 0;
}