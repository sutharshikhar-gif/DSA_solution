#include <iostream>
using namespace std;

// Function for integer addition
int add(int a, int b) {
    return a + b;
}

// Function for floating-point addition
float add(float a, float b) {
    return a + b;
}

int main() {
    int a, b;
    float x, y;

    cin >> a >> b;
    cin >> x >> y;

    cout << add(a, b) << endl;
    cout << add(x, y) << endl;

    return 0;
}
