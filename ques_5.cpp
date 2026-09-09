#include <iostream>
using namespace std;

int main(){
    float original_price, discount, discounted_price, tax_rate, final_price;
    cout << "Enter the original price: ";
    cin >> original_price;
    cout << "Enter the discount percentage: ";
    cin >> discount;
    cout << "Enter the tax rate percentage: ";
    cin >> tax_rate;
    discounted_price = original_price - (original_price * discount / 100);
    cout << "The discounted price is: " << discounted_price << endl;

    final_price= discounted_price + (discounted_price * tax_rate / 100);
    cout << "The final price after tax is: " << final_price << endl;

    

    return 0;
}