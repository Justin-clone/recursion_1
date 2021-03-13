#include <iostream>
using namespace std;
int getPow(int, int);

int main(){
	int b, p, total;
	
	cout<<"Input the base value: ";
	cin>>b;
	cout<<"Input the power value: ";
	cin>>p;
	total = getPow(b, p);
	cout<<"Answer is: "<<total;
	
	return 0;
}

int getPow(int base, int power){
	if(power != 0){
		return base * getPow(base,power-1);
	}
	return 1;
}
