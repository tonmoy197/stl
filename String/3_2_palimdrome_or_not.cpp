#include<bits/stdc++.h>
using namespace std;
//to run fast of the cin and cout
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//endl flash the program , for escape from that define '\n'
#define endl '\n';

int main(){
    optimize();
    string s="aabAa";
    //because s will reverse and override
    string temp=s;

    //reverse the main string and override
    reverse(s.begin(),s.end());

    if(s==temp) cout<<"Palimdrome";
    else cout<<"Not palimdrome";
}