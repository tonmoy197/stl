#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    
    vector<pair<int,int>> v;

    v.push_back({1,2});
    v.push_back({2,3});
    v.push_back({5,6});
    v.push_back({1,6});
    v.push_back({1,4});
    v.push_back({3,2});

    sort(v.begin(),v.end());

    for(auto u:v) cout<<u.first << " "<<u.second<<endl;
 
    return 0;
}