#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool isPrime = true;

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
