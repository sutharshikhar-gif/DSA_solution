#include <iostream>
using namespace std;    

int main() {
    cout << "Welcome to age calculator" << endl;
    
    int total_days;
    cout << "Enter your no. of days lived: ";
    cin >> total_days;

    int year = total_days / 365;
    int days = total_days % 365;

    cout << "Estimated age = " << year << " years and " << days << " days" << endl;

    return 0;
}