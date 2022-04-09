// https://codeforces.com/contest/4/problem/C

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    int n;
    string name;
    cin>>n;

    map<string,int> m;
    for(int i=1;i<=n;i++){
        cin>>name;
        if(m[name]==0) cout<<"OK"<<endl;
        else cout<<name<<m[name]<<endl;
        m[name]++;
    }
    
    return 0;
}