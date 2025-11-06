#include<iostream>
using namespace std;
int main(){
    int n1,n3,n2,sum=0,odd_sum=0,digit_sum=0;
    cout<<"Enter number: ";
    cin>>n1;
    //while loop:rums until the condition is true
    while(n1>=0){
        sum+=n1;
        n1--;
    }
    cout<<"sum of "<< n1 <<" numbers is: "<<sum<<endl;
    //for loop
    cout<<"Enter a number:";
    cin>>n2;
    for (int i=1;i<=n2;i++){
        if(i%2==0){
            continue;
        }
        else{
            odd_sum+=i;
        }
    }
    cout<<"odd numbers sum from 1 to "<<n2<<" is : "<<odd_sum<<endl;
    //do-while
    cout<<"Enter a number to find digits sum:";
    cin>>n3;
    int original=n3;
    do{
        int x=n3%10;
        digit_sum+=x;
        n3/=10;
    }while(n3>0);
    cout<<"sum of digits in "<<original<<" is:"<<digit_sum;
    return 0;
}