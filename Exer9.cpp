#include <iostream>
using namespace std;
string getRev(string)

int main(){
   string a,result;
   cout<<"Input a string: ";
   cin>>a;
   result = getRev(a);
   cout<<"Reversed string: "<<result;
   
   return 0;
}

string getRev(string str){
   if(str.size() == 0){
      return 0;
   }
   getRev(str.substr(1));
   cout << str[0];
}
