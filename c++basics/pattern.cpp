#include<iostream>
using namespace std;
int main(){
//pattern1:
//  1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
 int n=4;
cout<<"==pattern 1== \n";
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
/* pattern2:
   * * * *
   * * * *
   * * * *
   * * * *
 */
cout<<"==pattern 2== \n";
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
    {
        cout<<'*'<<" ";
    }
    cout<<endl;
}
//pattern3:
//A B C D
//A B C D
//A B C D
//A B C D
cout<<"==pattern 3==\n";
for (int i=1;i<=n;i++){
    char ch='A';
    for(int j=1;j<=n;j++)
    {
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
//pattern 4:
//1 2 3
//4 5 6
//7 8 9
cout<<"==pattern 4==\n";
int n1=3;
int n2=1;
for (int i=1;i<=n1;i++){
    for(int j=1;j<=n1;j++)
    {
        cout<<n2<<" ";
        n2++;
    }
    cout<<endl;
}
//pattern 5:
//*
//* *
//* * * 
//* * * *
cout<<"==pattern 5==\n";
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
    {
        cout<<'*'<<" ";
    }
    cout<<endl;
}
cout<<"==pattern 6==\n";
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
cout<<"==pattern 7==\n";
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<"==pattern 8==\n";
for (int i=1;i<=n;i++){
    for(int j=i;j>0;j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
int f=1;
cout<<"==pattern 9==\n";
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
    {
        cout<<f<<" ";
        f++;
    }
    cout<<endl;
}
cout<<"==pattern 10==\n";
for (int i=0;i<=n;i++){
    for(int j=0;j<i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<n-i;j++)
    {
        cout<<(i+1);
    }
    cout<<endl;
}
cout<<"==pattern 11==\n";
char l='A';
for (int i=0;i<=n;i++){
    for(int j=0;j<i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<n-i;j++)
    {
        cout<<l;
    }
    l++;
    cout<<endl;
}
cout<<"==pattern 12==\n";
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<j+1;
    }
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
}
cout<<"==pattern 13==\n";
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=0){
        for(int j=0;j<2*i-1;j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<i+1;j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=n-2){
        for(int j=0;j<(2*(n-i)-5);j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}