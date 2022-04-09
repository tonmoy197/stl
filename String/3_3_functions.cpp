#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Tonmoy Das";
    cout<<s<<endl;

    //erase 2nd element
    s.erase(s.begin()+1);
    cout<<s<<endl;

    //erase 2nd to 4th element
    s.erase(s.begin()+1,s.begin()+3);
    cout<<s<<endl;

    //remove a specific character
    s.erase(remove(s.begin(),s.end(),'D'),s.end());
    cout<<s<<endl;

    

    //clear the s fully
    s.clear();

    //checking is the s is empty or not 
    if(s.empty())cout<<"Empty";
    else cout<<"Not empty";


    //replace specific part of string

    //convert string to the integer

}