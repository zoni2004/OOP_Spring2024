/* finding fctorial using recusrsion and storing each ans of fucntion call in an array*/

#include <iostream>
using namespace std;

int factorial(int n){
    int fact[n];
    if (n==1){
        return n;
    }
    else {
         for (int i=0; i<n; i++){
             fact[i] = n * factorial(n-1);
         }
         for (int i=0; i<n; i++){
             return fact[i];
         }
    }
return 0;
}

int main(){
    int num;
    cout << "Enter a positive number:";
    cin >> num;
    int factorial[num]; 
    if (num == 0){
        cout << "1";
    }
    else if (num >= 1) {
        cout << "The factorial is taken as following:";
        int result = factorial(num);
        cout << result;
     }
     else {
         cout << "Invalid input";
     }

return 0;
}
