#include <iostream>
#include <string.h>
#define ll long long
using namespace std;
int main(){
ll t,n,k;
cin>>t;
while(t--){
 cin>>n>>k;
 string currString(n,'a');
 for(ll i=n-2;i>=0;i--){
     ll x=n-i-1;
     if(k<=x){
         currString[i]='b';
         currString[n-k]='b';
         cout<<currString<<endl;
         break;
     }
     k-=x;
 }
}
return 0;
}