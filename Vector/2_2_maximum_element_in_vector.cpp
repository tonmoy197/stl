#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,4,3,4,6,5};
    

    //find maximum element by iterator
    vector<int>::iterator it=max_element(v.begin(),v.end());
    cout<<*it<<endl;
    //index of the maximum element 
    int n=it-v.begin();
    cout<<n;
    cout<<endl;

    //index of the minimum value
    int min=min_element(v.begin(),v.end())-v.begin();
    cout<<min;





}