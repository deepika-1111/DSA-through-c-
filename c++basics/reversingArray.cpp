#include<iostream>
using namespace std;
int main(){
    int n=5,start=0,end=n-1;
    int a[n]={1,2,3,4,5};
    cout<<"Array before reversing :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"Array after reversing :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}