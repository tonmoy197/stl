#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v;

    cout<<"How many number you wants to take inpu?"<<endl; 
    cin>>n;

    cout<<"Enter your numbers="<<endl;
    //take input of n numbers
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    //print output
    cout<<"Your entered numbers are=";
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
}