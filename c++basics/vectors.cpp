#include<iostream>
//to use vectors include <vector> or <bits/c++.h>
#include<vector>
using namespace std;
int main(){
    //Three ways of declaring vectors in c++
    vector <int>vec1(5);
    vector <int>vec2={1,2,3};
    vector <int>vec3(3,0);
    cout<<"Enter vector 1 values:"<<endl;
     for(int &x : vec1){
         cin >> x;
     }

    //For displaying use for each loop
    for(int i:vec2){
        cout<<i<<" ";
    }cout<<endl;
    for(int i:vec3){
        cout<<i<<" ";
    }cout<<endl;
    //vectors function
    cout<<vec1.size()<<endl;
    vec2.push_back(5);
    cout<<"after pushing back 5:"<<endl;
    for(int i:vec2){
        cout<<i<<" ";
    }cout<<endl;
    vec2.pop_back();
    cout<<"after popping back :"<<endl;
    for(int i:vec2){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"vector 1 front,back,at(2):\n";
    cout<<vec1.front()<<endl;
    cout<<vec1.back()<<endl;
    cout<<vec1.at(2)<<endl;
    return 0;
}