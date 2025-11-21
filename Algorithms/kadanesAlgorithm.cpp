#include<iostream>
using namespace std;
int main(){
    int a[]={1,-1,4,-2,5,8};
    int maxsum=0;
    for(int i=0;i<6;i++){
        int currentsum=0;
        for(int j=i;j<6;j++){
            currentsum+=a[j];
            maxsum=max(currentsum,maxsum);
            if(currentsum<0){
                currentsum=0;
            }
        }
    }cout<<"max sum of subarray is: "<<maxsum<<endl;
    return 0;
}