#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,4,6,5,3,1,2};

    //to sort first to last element in non decreasing order
    sort(v.begin(),v.end());

    //to sort 2nd to 4th element
    // sort(v.begin()+1,v.begin()+4);//complexity--> O(nlog2(n))
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    //sorting in non increasing order
    // sort(v.begin(),v.end(),greater<int>());
    // sort(v.rbegin(),v.rend());
    reverse(v.begin(),v.end());

    for(auto u:v)cout<<u<<" ";
    cout<<endl;
}