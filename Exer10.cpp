#include <iostream>
using namespace std;
int mulDigit(int);

int main(){
   int n, result;
   cout << "Enter a number: ";
   cin >> n;
   result = mulDigit(n);
   cout << "Factorial of the number is " << result;
   return 0;
}

int mulDigit(int num) {

   if (num > 0) {
      return num * mulDigit(num-1);
    } else{
 	return 1;}
}
