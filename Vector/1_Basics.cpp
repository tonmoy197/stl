#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    vector<int> v;

    //enter elements to the v vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    //to print 4th element 
    cout<<v[3]<<endl;

    //to find the size of the vector
    cout<<v.size(); 

    //declare vector like array,with element of all zero -->we can override later
    vector<int> v0(10);
    for(int i=0;i<v0.size();i++)cout<<v0[i]<<endl;

    //copy a vector the other vector
    vector<int> temp;
    temp=v0;

    //take element directly in vector and print them
    vector<int> v2={2,3,4,5};
    for(int i=0;i<v2.size();i++)cout<<v2[i]<<endl;

    //clear() -->delete all element of the vector
    v.clear();
    cout<<v.size()<<endl;

    //empty()-->Check the vector is empty or not returns 1(for empty) or 0
    cout<<v.empty()<<endl;

    //resize(10)-->make the vector the of 10 element with others element is zero
    v2.resize(10);
    for(int i=0;i<v2.size();i++)cout<<v2[i]<<endl;



}