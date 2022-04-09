#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int cnt[123];
int main(){
    optimize();
    vector<int> v={2,3,2,3,2,3,3,3};

    //value in index v[i] of cnt increses for same value occured in v 
    //in index 2 of cnt value=3
    //in index 3 of cnt value=5
    //keep in mind: array does not store long long values
    for (int i=0;i<5;i++){
        cnt[v[i]]++;
    }
    for(auto u:cnt)cout<<u<<endl;
 
    return 0;
}