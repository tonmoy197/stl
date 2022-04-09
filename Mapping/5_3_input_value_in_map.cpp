#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    map<int,string> id;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        id[i+1]=s;
    }

    for(auto u:id) cout<<u.first<<" "<<u.second<<endl;
 
    return 0;
}