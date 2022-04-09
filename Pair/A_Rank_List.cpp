#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//using comperator to sort in my way
bool cmp(const pair <int,int> &p1,const pair<int,int> &p2){
     if(p1.first>p2.first) return 1;
     else if(p2.first==p1.first) return (p1.second<p2.second);
     return 0;
}

int main(){
    optimize();
    int n,k,a,b,count=0;
    cin>>n>>k;
    vector<pair<int,int>> v;

    //METHOD-1: With comperator

    // //entering all values to the vector
    // for(int i=0;i<n;i++){
    //     int p,t;
    //     cin>>p>>t;
    //     v.push_back({p,t});
    // }

    // //sorting in a rank list
    // sort(v.begin(),v.end(),cmp);

    // //comparing with kth element and counting them
    // for(auto u:v){
    //     if(u==v[k-1]) count++;
    // }
    // cout<<count<<endl;

    //METHOD -2-->using negative in second pair
    //entering all values to the vector
    for(int i=0;i<n;i++){
        int p,t;
        cin>>p>>t;
        v.push_back({p,-t});
    }

    //sorting in a rank list without comperator
    sort(v.rbegin(),v.rend());

    //comparing with kth element and counting them
    for(auto u:v){
        if(u==v[k-1]) count++;
    }
    cout<<count<<endl;

    return 0;
}