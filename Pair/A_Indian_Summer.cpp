#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    vector<pair<string,string>> v;
    int n;
    cin>>n;

    while(n--){
        string s1,s2;
        cin>>s1>>s2;
        v.push_back({s1,s2});
    }

    sort(v.begin(),v.end());
    int l=unique(v.begin(),v.end())-v.begin();
    cout<<l<<endl;

    return 0;
}


