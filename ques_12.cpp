#include <iostream>
using namespace std;

int main (){

    int amt;
    float blc;
    int trfee = 2;
    cout << "enter your account balance : ";
    cin >> blc;
    cout << "enter withdrawal amount :";
    cin >> amt;
    

   bool isValid = (amt > 0)&& (amt%100 ==0 )&& (blc >= amt + 2);

   cout << "Transection Valid : " << boolalpha << isValid <<endl;
   cout << "Available Balance : " << blc - (amt + trfee) << endl;

   return 0;

}