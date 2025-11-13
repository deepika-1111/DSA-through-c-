#include<iostream>
using namespace std;
//function without return type & parameters
void sayhello(){
    cout<<"hello"<<endl;
}
//function with return type & no parameters
int sumOfTwo(){
    int a=10,b=12;
    return a+b;
}
//funtion with parameters and no return type
void evenOrOdd(int n){
    if(n%2==0){
        cout<< n<<" is even"<<endl;
    }
    else{
        cout<<n<<" is odd"<<endl;
    }
}
//funtion with return type & parameters
void fibonacci_series(int n){
    int n1=0,n2=1;
    for(int i=0;i<n;i++){
        cout<<n1 << " ";
        int next=(n1+n2);
        n1=n2;
        n2=next;
    }
}
int main(){
    sayhello();
     int result=sumOfTwo();
     cout<<"sum of 10 and 12 is: "<<result<<endl;
    evenOrOdd(6);
    fibonacci_series(5);
    return 0;
}