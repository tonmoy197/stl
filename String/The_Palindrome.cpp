// https://www.hackerearth.com/problem/algorithm/the-palindrome-2/

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    int t,n;
    cin>>t;

    while(t--){
        string s,temp;
        cin>>s;
        //copy s to the temp
        temp=s;

        //reverse the temp string
        reverse(temp.begin(),temp.end());

        //if reverse string is equal to the main string
        if(temp==s) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;

}