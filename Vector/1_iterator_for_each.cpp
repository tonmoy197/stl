#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,4,5};

    //a integer iterator which will works with the address
    //the address of the next index is 1 grater than preceeding one
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it+4<<" ";
    }
    cout<<endl;

    //for each loop--> To iterate loop
    //if we do not know about the type of u then will use--> auto
    for(int u:v){
        cout<<u+2<<" ";
    }    
    cout<<endl;
    
}