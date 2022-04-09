#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
bool isvowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(){
    optimize();
    vector<string> v;
    int count[]={5,7,5},d=0;

    for(int i=0;i<3;i++){
        //take input with space
        char c;
        string s;
        cin>>c;
        getline(cin,s);
        s=c+s;

        //storing three string in a vector
        v.push_back(s);
    }

    for(int i=0;i<3;i++){
        int c=0;
        //counting the number of voewel
        for(auto u:v[i])if(isvowel(u)==1)c++;

        //if any of the one is not equal then print NO and return 0
        if(c!=count[i]) return cout<<"NO\n",0;
    }
    
    cout<<"YES";
    
    return 0;
}