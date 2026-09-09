#include <iostream>
 using namespace std;

 int main(){

    int a, b, c;
    cout<<"enter the value of a\n";
    cin>>a;
    cout<<"enter the value of b\n";
    cin>>b;
    cout<<"enter the value of c\n";
    cin>>c;

    if(a>=b && a>=c){
        cout<<"a is the largest number";
    }
    else if(b>=a && b>=c){
        cout<<"b is the largest number";
    }
    else{
        cout<<"c is the largest number";
    }
 }