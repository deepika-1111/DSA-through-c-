#include<iostream>
using namespace std;
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
    fibonacci_series(5);
    return 0;
}