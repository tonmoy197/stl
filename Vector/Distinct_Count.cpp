//https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N,X,A,d;
    cin>>T;
    
    while(T--){
        cin>>N>>X;

        //if use it out of while loop then,vector can not take input for other test cases
        vector<int> v;

        //storing input in a vector
        for(int j=0;j<N;j++){
            cin>>A;
            v.push_back(A);
        }

        //make them sorted in non decreasing order
        sort(v.begin(),v.end());

        //find the number of unique element
        d=unique(v.begin(),v.end())-v.begin();
   
        //comparison
        if(X==d){
            cout<<"Good"<<endl;
        }
        else if(d>X){
            cout<<"Average"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }     
            
    }
}