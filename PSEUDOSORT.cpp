#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;int p=0;
      ll v[n];
      ll c[n];
       loop(i,0,n){
           cin>>v[i];
           c[i]=v[i];
       }
       loop(i,0,n-1){
         if(v[i+1]>v[i]||v[i+1]==v[i]){
             continue;
         }
         else {swap(v[i],v[i+1]);
         break;}
       }
       sort(c,c+n);
       loop(i,0,n){
           if(v[i]==c[i]){
               continue;
           }
           else p++;
       }
       if(p==0){py;}
       else pn;
    }
    return 0;
}