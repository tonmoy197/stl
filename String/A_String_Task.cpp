// https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin>>s;

    //iterating string by for each 
    for(auto u:s){
        //covert char to the lowercase
        char c=tolower(u);

        //checking if the char is constant?
        if((c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')==0){
            ans+='.';
            ans+=c;
        }          
    }

    cout<<ans<<endl;

    return 0;

}