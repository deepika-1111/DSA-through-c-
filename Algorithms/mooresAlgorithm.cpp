#include<iostream>
using namespace std;
int main(){
    int n, i=0,freq=0,ans=0;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array values to check majority element:"<<endl;
    while(i<n){
        cin>>a[i];
        i++;
    }
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=a[i];
        }
        if(a[i]==ans){
            freq++;
        }else{
            freq--;
        }
    }int count=0;
    for (int i=0;i<n;i++){
        if(a[i]==ans){
            count++;
        }
    }if(count>n/2) cout<<"majority element is:"<<ans;
    else cout<<"There is no majority element in given array";
}