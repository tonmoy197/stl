#include<bits/stdc++.h>
using namespace std;

//to run fast of the cin and cout
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s1="Tonmoy";
    string s2="Das";
    string s3;
    cin>>s3;

    //concatenate and print
    string s=s1+' '+s2;
    cout<<s<<endl;

    //print with help of the iterator
    string::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it;
    }
    cout<<endl;

    //print with help of the for each
    for(auto u:s) cout<<u;
    cout<<endl;

    


}
