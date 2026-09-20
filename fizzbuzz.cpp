#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
         if (i%15==0){
            cout<<"FizzBuzz"<<endl;
            continue;

         }

        else if (i%3==0){
        cout<<"Fizz"<<endl;
         continue;
      
        }
         else if (i%5==0){
        cout<<"Buzz"<<endl;
        continue;
        
      }

      cout<<i<<endl;

    }

    return 0;
}