#include<iostream>
using namespace std;
int main(){
    int age ,marks;
    //if-else
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"valid age for voting\n";
    }
    else{
        cout<<"not eligible for voting\n";
    }
    //if-else if-else
    cout<<"Enter your marks:";
    cin>>marks;
    if(90<marks&&marks<=100)
    {
        cout<<"A grade";
    }
    else if(80<marks&&marks<=90){
        cout<<"B grade";
    }
    else if(35<=marks&&marks<70){
        cout<<"Pass";
    }
    else
    {
        cout<<"Fail !!";
    }
    return 0;
}