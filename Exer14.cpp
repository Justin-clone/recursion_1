#include <iostream>
using namespace std;
 
void printType(int cur, int limit);
 
int main()
{
    int beg, limit;
    beg = 0;
 
    cout<<"Enter limit: ";
    cin>>limit;
    cout<<"Even/odd Numbers from 0 to "<<limit<<endl;
    printType(beg, limit);
 
    return 0;
}
 
 
 
void printType(int cur, int limit)
{
    if(cur > limit)
        return;
 
    cout<<cur<<endl;
 
    printType(cur + 2, limit);
}
