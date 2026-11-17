#include <iostream>
using namespace std;

// Pass by Value
void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue: " << x << endl;
}

// Pass by Reference
void passByReference(int &x) {
    x = x + 10;
    cout << "Inside passByReference: " << x << endl;
}

int main() {
    int a, b;

    cin >> a >> b;

    passByValue(a);
    cout << "After passByValue: " << a << endl;

    passByReference(b);
    cout << "After passByReference: " << b << endl;

    return 0;
}
