#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
 
int main() {
    ll t;
    //t=1;
    cin>>t;
    while(t--){
     ll n;ll ans;
     cin>>n;
     map<ll,ll> m;
     loop(i,0,n){
         ll k;
         cin>>k;
         m[k]++;
     }
    ans=-1;
     for(auto i:m){
         if(i.second>=3){
             ans=i.first;
             break;
         }
     }
     cout<<ans<<endl;
//      ll v[n];
//      loop(i,0,n){
//          cin>>v[i];
//      }
//      sort(v,v+n);
//      loop(i,0,n){
//          ll k = count(v,v+n,v[i]);
//          if(k >= 3){
//              ans=v[i];
//              break;
//          }
//      }
//      if(ans==0){
//          puts("-1");
//      }
//      else cout<<ans<<endl;
    }
// }
return 0;}
