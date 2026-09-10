#include <iostream>
using namespace std;

int main(){
     int N;
     cout << "Enter a number: ";    
     cin >> N;

     if(N %3 == 0 && N %5 == 0){
         cout << "Divisible by both 3 and 5" << endl;
     }
     else if(N %3 == 0){
         cout << "Divisible by 3" << endl;
     }
     else if(N %5 == 0){
         cout << "Divisible by 5" << endl;
     }
     else{
         cout << "Not divisible by either 3 or 5" << endl;
     }
     return 0;


}