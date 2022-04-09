#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    string s="Hello";
    int k=10,c=0;
    
    do{
        cout<<s<<endl;
        c++;
        if(c==k) break;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}