#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();

    vector<map<string, int>> v;
    map<string,int> c;
    c["tonmoy"]=16;
    v.push_back(c);

    for(auto u:v)cout<<u["tonmoy"]; 
    return 0;
}