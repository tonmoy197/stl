#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    int n,a;
    cin>>n;

    //assign all values to a map
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a;
        m[a]++;
    }

    //counting which have to delete
    int count=0;
    for(auto u:m){
        if(u.first<=u.second) count+=u.second-u.first;
        else count+=u.second;  
    }

    cout<<count<<endl;
 
    return 0;
}