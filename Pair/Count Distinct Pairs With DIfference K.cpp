#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    // int k;
    // cin>>k;
    // int A[3]={1,3,5},count=0;
    // sort(A,A+3);

    
    // for(int i=0;i<2;i++){
    //     if(A[i+1]-A[i]==k){
    //         count++;  
    //     } 
    // }

    // cout<<count;
    
    int n,k,a[123];
    cin>>n;
    cin>>k;
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++) cin>>a[i];
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]!=a[i] && a[i]-a[j]==k){
                v.push_back({a[i],a[j]});
            }
        }
    }

    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;

    return 0;
}