// https://practice.geeksforgeeks.org/problems/find-the-frequency/1
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    vector<int> v;
    v={1,1,1,1,1};
    int x=1;

    int n;
    cin>>n;

    map<long long,int> m;
    for(auto u:v) m[u]++;
    cout<<m[x]<<endl;

 
    return 0;
}