#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    pair<string,vector<int>> p;

    //make pair from the values
    //p=make_pair(2,3);
    p={"Tonmoy",{3,4,5}};

    cout<<p.first<<" ";
    for(auto u:p.second) cout<<u<<endl;

    return 0;
}