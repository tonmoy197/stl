#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    int n,a,s=0,d=0;
    vector<int> v;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    while(!v.empty()){
        //for sereja
        if(v[0]>v.back()){
            s=s+v[0];
            v.erase(v.begin());
        }
        else{
            s=s+v.back();
            v.pop_back();
        }
        // cout<<"Hello";

        //for dima
        if(v[0]>v.back()){
            d=d+v[0];
            v.erase(v.begin());
        }
        else{
            d=d+v.back();
            v.pop_back();
        }
    }

    cout<<s<<" "<<d<<endl;

}