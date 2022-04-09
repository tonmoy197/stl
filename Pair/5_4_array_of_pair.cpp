#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    optimize();
    pair<int,int> p[]={{5,6},{3,5},{6,8},{8,5}};

    sort(p,p+4);

    for(int i=0;i<4;i++) cout<<p[i].first<<" "<<p[i].second<<endl;

    return 0;
}