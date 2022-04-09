// https://www.hackerearth.com/problem/algorithm/the-palindrome-2/

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    int n,sum=0;
    string s,temp;
    
    cin>>n;
    //sum of digit
    while(n){
        sum=sum+n%10;
        n/=10;
    }
    
    //convert to the string
    s=to_string(sum);
    //copy s to the temp
    temp=s;

    //reverse the temp string
    reverse(temp.begin(),temp.end());

    //if reverse string is equal to the main string
    if(temp==s)cout<<1;
    else cout<< 0;

}