#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index, value;
    cin >> index >> value;

    // Modify element at given index
    if (index >= 0 && index < n) {
        arr[index] = value;
    }

    // Print modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
