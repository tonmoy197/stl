#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        bool f1=next_permutation(s.begin(),s.end());
        if(f1) cout<<s<<endl;
        else cout<<"no answer"<<endl;
        
    }
    
    return 0;
}