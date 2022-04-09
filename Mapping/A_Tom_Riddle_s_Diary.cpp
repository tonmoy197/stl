// https://codeforces.com/contest/855/problem/A
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    int n;
    string s;
    cin>>n;

    // //storing all string to a vector
    // vector<string> v;
    // for(int i=0;i<n;i++){
    //     cin>>s;
    //     v.push_back(s);
    // }

    // //storing those string to the map
    // map<string,int> m;
    // for(auto u:v){
    //     if(m[u]==1)cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;
    //     m[u]=1;
    // }


    // METHOD-2
    map<string,bool> m;
    while(n--){
        cin>>s;
        if(m[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        m[s]=1;
    }
 
    return 0;
}