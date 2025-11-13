#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"sum of 1 and 2 is : "<<a+b<<endl;
}
void changearray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]*=2;
    }
}
int main(){
    int n=3,a1=1,b=2;
    int a[n]={1,2,3};
    //pass by value
    add(a1,b);
    //by default arrays in c++ are passed by reference
    changearray(a,n);
    //changes in a function will reflect in original
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}