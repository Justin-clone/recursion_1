#include <iostream>
using namespace std;
bool isPalindrome(string);

int main(){
    string str;
    
    cout<<"Input string: ";
    cin>>str;
 
    if (isPalindrome(str)) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }
 
    return 0;
}

bool isPalindrome(string str)
{
    int beg = 0;
    int las = str.length() - 1;
 
    while (beg < las)
    {
        if (str[beg] != str[las]) {
            return false;
        }
 
        beg++;
        las--;
    }
 
    return true;
}
