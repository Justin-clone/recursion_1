#include<iostream>
using namespace std;
int getPri(int);

int main() {
    int input, result;
    cout << "Enter a number:";
    cin >> input;
    result = getPri(input);

    if (result %2) {
        cout << "Number is prime:" << input;
    } else {
        cout << "Number is not prime:" << input;
    }

    return 0;
}

int getPri(int x) {
        int p = 0;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                p = 1;
                break;
            }
        }
        return p;
    }
