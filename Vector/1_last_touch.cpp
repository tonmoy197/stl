#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,4,5};
    
    //print the last element
    cout<<v.back()<<endl;

    //delete the last element
    v.pop_back();//O(1)

    //print and delete first element
    cout<<*v.begin()<<endl;
    v.erase(v.begin());//O(n)-->Shift every element to the left side
    
    //so delete first element first reverse it and then delete last element 
    reverse(v.begin(),v.end());
    v.pop_back();

    for(auto u:v) cout<<u<<" ";

}