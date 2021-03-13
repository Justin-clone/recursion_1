#include <iostream>
using namespace std;
char copy(string);

int main(){
	char str1[100], str2[100];
 
    cout<<"Enter string to copy: ";
    cin>>str1;
    copy(str1, str2, 0);
    cout<<"Copying success.\n";
    cout<<"The first string is: "<<str1<<'\n';
    cout<<"The second string is: "<<str2;
}

string copy(char str1[], char str2[], int index)
{
    str2[index] = str1[index];
    if (str1[index] == '\0')
        return 0;
    copy(str1, str2, index + 1);
}
