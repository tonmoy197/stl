#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s="emon",t="emonta";

    //prefix-->part of a string from first
    //suffix-->part of string from the last element
    //sunstring-->part of string ,from any part of the string
    if(s<t) cout<<s<<" "<<"is smallest"<<endl;
    else cout<<t<<" "<<"is smallest"<<endl;

    vector<string> v;

    v.push_back("Tonmoy");
    v.push_back("Emon");
    v.push_back("tonni");
    v.push_back("Antor");
    v.push_back("prity");

    //sort the element of vector in ascending-->O(nlog(2n)*length)
    sort(v.begin(),v.end());

    for(auto u:v) cout<<u<<endl;





}