#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,4,3,4,6,5};
    sort(v.begin(),v.end());//O(nlog(2n))
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    //override elements of begining with the unique numbers
    // unique(v.begin(),v.end());
    // for(auto u:v) cout<<u<<" ";
    // cout<<endl;

    // size of unique number
    int sz=unique(v.begin(),v.end())-v.begin();

    //find maximum element by iterator
    vector<int>::iterator it=max_element(v.begin(),v.end());
    cout<<*it<<endl;
    //index of the maximum element 



}