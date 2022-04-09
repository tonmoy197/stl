#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    optimize();
    int t;
    cin>>t;
    int a,b,c,d;

    while(t--){
        int n;
        cin>>n;

        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                for(int k=1;k<n;k++){
                    for(int l=1;l<n;l++){
                        if(lcm(i,j)==2){
                            if((gcd(i,j)==lcm(k,l)) && i+j+k+l==n){
                                a=i;
                                b=j;
                                c=k;
                                d=l;
                                break;
                            }
                        }
                        else{
                             if((gcd(i,j)==lcm(k,l)) && i+j+k+l==n){
                            a=i;
                            b=j;
                            c=k;
                            d=l;
                            break;
                        }
                        }
                       
                    }
                }
            }
        }
        

        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    }
 
    return 0;
}