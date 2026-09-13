#include <iostream>
using namespace std;

int main (){

    bool num= true;

    cin>> num;

    cout << "initial :" << boolalpha << num << endl;

    num = !num;

    cout << "toggled :" << boolalpha << num << endl;

    return 0;


}