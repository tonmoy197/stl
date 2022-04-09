#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Tonmoy Das";
    cout<<s<<endl;

    //erase 2nd element
    s.erase(s.begin()+1);
    cout<<s<<endl;

    //check the char is upper or not
    bool f1=isupper(s[0]);
    cout<<f1<<endl;

    //check is the char is space or not
    bool f2=isspace(s[0]);
    cout<<f2<<endl;

    //convert upper to lower
    char c=tolower(s[0]);
    cout<<c<<endl;

}