#include<iostream>
using namespace std;
int main()
{
    //typeconversion->complier->small to big conversion
    float a=11.9f;
    double b=a;
    cout<<a<<endl<<b <<endl;
    //typecast->manual->big to small conversion
    int c=(int)a;
    //round of to 11
    cout<<c;
    return 0;
}