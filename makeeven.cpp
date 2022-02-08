#include <bits/stdc++.h>
using namespace std;
int eve(int n){
if(n%2==0)
    return 0;
    int c=n;
    while(n>10)
        n/=10;
    if(n%2==0)
        return 1;
    n = c;
    while(n%2!=0)
        n/=10;
    if(n!=0)
        return 2;
    else
        return -1;
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
cout<<eve(n)<<endl;
}}