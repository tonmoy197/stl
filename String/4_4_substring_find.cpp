#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Tonmoy Das moon";
    cout<<s<<endl;

    //Returns the index of first occurence of substring,if substring 
    //not found returns -1
    if(s.find("on")!=-1) cout<<"Found"<<" "<<s.find("on");
    else cout<<"Not Found";



}