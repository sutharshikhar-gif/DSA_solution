#include <iostream>
using namespace std;

int main() {
    cout <<"welcome to BMI calculator"<<endl;

    float weight, height;
    cout << "Enter your weight in kg: ";
    cin>> weight;
    cout << "Enter your height in m: ";
    cin>> height;
    float bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    if(bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if(bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight." << endl;
    } else if(bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }


   
    return 0;
}