#include <iostream>
using namespace std;
int getGcd(int, int);

int main(){
   int a , b;
   cout<<"Enter the values of a and b: "<<endl;
   cin>>a>>b;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< getGcd(a, b);
   return 0;
}
int getGcd(int a, int b){
	int total = a % b;
   	if (b == 0){
   		return a;
   		return getGcd(b, total);
	}
}
