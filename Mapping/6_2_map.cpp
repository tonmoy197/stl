#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();

    map<string,int> id;
    
    //assigning value to the map
    id["Tonmoy"]=1;
    id["Tonni"]=2;
    id["Megna"]=4;
    id["Prety"]=9;
    //can be override value of the key
    id["Tonmoy"]=3;

    //accessing values of is by string
    cout<<id["Tonni"]<<endl;

    //decalring as a string,string
    map<string,string> gender;
    gender["Tonmoy"]="male";
    gender["Tonni"]="female";
    cout<<gender["Tonmoy"]<<endl;

    //counting the long long values which can not be count with help of vector
    vector<long long> v={1,1000013302,299303920,1000013302,1000013302,1,2,2};
    map<long long,int>cnt;

    for(auto u:v){
        cnt[u]++;
    }

    for(auto u:cnt) cout<<u.first<<" "<<u.second<<endl;

    return 0;
}