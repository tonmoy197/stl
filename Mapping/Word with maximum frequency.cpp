// https://practice.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    string s;
    int max=0;

    //input a line string
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;

    //split the string and store it to a vector
    vector<string> v;
    string word=" ";
    for(auto u:s){
        if(u==' '){
            v.push_back(word);
            word=" ";
        }
        else{
            word+=u;
        }
    }

    //Assigning the words of the vector to the map and count max
    map<string,int> cnt;
    for(auto u:v){
        cnt[u]++;
        if(cnt[u]>max) max=cnt[u];
    }
    
    //storing the maximum string 
    string temp;
    for(auto u:v){
        if(cnt[u]==max){
            temp=u;
            break;
        }
    }

    cout<<temp<<" "<<max;
    
    return 0;
}



