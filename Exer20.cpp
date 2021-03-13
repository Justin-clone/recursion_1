//not done
#include <iostream>
using namespace std;
char findCap(string);

int main()
{
    string str;
 	cout<<"Input a string: ";
 	cin>>str;
    char result = findCap(str);
    if (result == 0)
        cout << "No uppercase letter";
    else
        cout << result << "\n";
    return 0;
}

char findCap(string str){
	int i = 0;
    if(str.length()>i){
        if (isupper(str[i])){
            return str[i];
			}
		}
    return 0;
}


