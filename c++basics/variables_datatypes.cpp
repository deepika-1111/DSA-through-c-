#include<iostream>
using namespace std;
int main()
{
    //variable declaration: datatype variable_name=value;
    //int,float,double,bool,char are the primitive datatypes
    //int variable 4bytes
    int age=18;
    //float/double variable float and double differ in size float=4bytes,double=8bytes
    // if f is not mentioned by default value will be double
    float price=11.9f;
    //char variable 1byte 
    char grade='A';
    //bool variable 1byte(prints 0=false or 1=true)
    bool ispass=true;
    cout<<age<<endl<<grade<<endl<<ispass<<endl<<price<<endl;

    //sizeof(): to find the size of any datatyes
    cout<<"size of int:"<<sizeof(int);
    return 0;
}