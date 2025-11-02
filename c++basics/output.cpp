#include<iostream>
using namespace std;
int main(){
    //without namespacing std syntax is std::cout<<
    cout<<"Hello,This is my first cpp program!"<<endl;
    //print mutliple things in one line
    cout<<"Hello "<<"World"<<endl;
    //2 ways to end a line in C++
    cout<<"hello"<<endl<<"my first c++ prgm"<<endl; //1st way
    cout<<"hello" <<"\n"<<"my first c++ prgm";//2nd way
    return 0;
}