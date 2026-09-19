#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter a  no";
    cin >> n;
    int org = n;

    int op=0;
    int rem;
    while (n>0){
        rem = n%10;
        op = op*10 + rem;
        n=n/10;


    }

    
   if (org == op)
    cout<<"Palindrome";
   

   else
    cout<<"Not Palindrome";
   

}