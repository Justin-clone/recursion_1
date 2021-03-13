#include<iostream>
using namespace std;
int isPrime(int);

int main() {
    int input, result;
    cout << "Enter a number:";
    cin >> input;
    result = isPrime(input);
    if (result %2) {
        cout << "Number is prime:" << input;
    } else {
        cout << "Number is not prime:" << input;
    }
    return 0;
}

int checkForPrime(int a){
	int i = a/2;
    if(i==1)
    {
        return 1;
    }else if(a %i==0){
         return 0;
    }else{
         i = i -1; 
         checkForPrime(a);
    }
}

