#include<iostream>
using namespace std;
int main(){
    //4 ways of declaring an array
    int a1[5]={1,2,3,4,5};
    int a2[3];
    int a3[]={1,2,3};
    int a4[100]={1,2};
    //overwrite values
    a1[4]=6;
    //accesing:by using indices
    cout<<"After overwriting a1[4]:"<<a1[4]<<endl;;
    //taking input values of arrays
    cout<<"Enter 3 array values:"<<endl;
     for(int i=0;i<3;i++)
    {
        cin>>a2[i];
    }
    //displaying complete array using loops
        cout<<"You entered:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a2[i]<<" ";
    }cout<<endl;
    return 0;
}