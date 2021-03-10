//need help
#include <iostream>
using namespace std;
int getBin(int);

int main(){
	int input, result;
	cout<<"Input a decimal number: ";
	cin>>input;
	result = getBin(input);
	cout<<"The binary of the input is: "<<result;
}

int getBin(int input){
	if(input != 0){
		return getBin(input -1) / 2;
	}
	return 1;
}
