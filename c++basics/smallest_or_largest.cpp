#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int a[n]={1,0,3,4,-5};
    int smallest= INT_MAX;
    int largest= INT_MIN;
    for(int i=0;i<n;i++){
        //smallest
        smallest=min(a[i],smallest);
        //largest
        largest=max(a[i],largest);
        
    }
    cout<<"smallest: "<<smallest<<endl;
    cout<<"largest: "<<largest<<endl;
    return 0;
}