#include <iostream>
using namespace std;
int addDigit(int);

int main(){
   int n, result;
 
   cout << "Enter a number: ";
   cin >> n;
   result = addDigit(n);
   cout << "Sum of digits of a number is " << result;
   return 0;
}

int addDigit(int num) {

   if (num <= 0) {
      return 0;
    } 
    
 	return (num % 10) + addDigit(num / 10);
}
