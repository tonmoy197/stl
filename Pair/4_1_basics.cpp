#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();

    //decalring pair
    pair<vector<int>,string> p;

    //assingning values
    p.first={1,2,3};
    p.second="Tonmoy Das";

    //another way
    p={{5,6,7},"Tonmoy1 Das"};

    //printing the values
    for(auto u:p.first) cout<<u;
    cout<<endl;
    cout<<p.second<<endl;

    //comparison betweeen two vector
    pair <int,int> p1,p2;
    p1={3,5};
    p2={3,6};
    pair<int,int> p3=(p1>p2)?p1:p2;
    //pair<int,int> p3=max(p1,p2);
    cout<<p3.first<<" "<<p3.second;

    return 0;
}