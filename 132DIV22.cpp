#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
 ll n,q;
 cin>>n>>q;
 ll arr[n];
 ll aux[n];
 ll aux2[n];
 aux[0]=0,aux2[0]=0;
 map<ll,ll>mp;
 arr[0]=0;
 for(ll i=1;i<=n;i++){
    cin>>arr[i];
    ll s = arr[i]-arr[i-1];
    if(s>0){
      aux[i] = aux[i-1]+s;
      aux2[i] = aux2[i-1];
    }
    else{
      aux[i] = aux[i-1];
      aux2[i] = -s+aux2[i-1];
    }
 }
    while(q--){
      ll s1,t1;
      cin>>s1>>t1;
      if(s1<=t1){
         cout<<aux2[t1]-aux2[s1]<<endl;
      }
      else cout<<aux[s1]-aux[t1]<<endl;
    }
    
 }
//  ll aux[n];
//  ll aux2[n];
//  for(ll i=0;i<n-1;i++){
//     ll x = arr[i]-arr[i+1];
//     aux[i] = max(0,x);
//  }
//  for(ll i=0;i<n-1;i++){
//     ll x = arr[i]-arr[i+1];
//     aux[i] = max(0,x);
//  }
//  for(ll i=n-1;i>=0;i--){
//     ll x = arr[i]-arr[i+1];
//     aux2[i] = max(0,x);
//  }
// //  for(ll i=0;i<n;i++){
// //     cout<<aux[i]<<" ";
// //  }
// ll k =0;
// for(ll i=0;i<n;i++){
//     ll a = aux[i];
//     aux[i] = k;
//     k+=a;
// }
// for(ll i=0;i<n;i++){
//     ll a = aux[i];
//     aux[i] = k;
//     k+=a;
// }
// //  for(ll i=0;i<n;i++){
// //     cout<<aux[i]<<" ";
// //  }
// while(q--){
//    ll a,b;
//    cin>>a>>b;
//    if(a<b){
//     cout<<aux[a-1]-aux[b-1]<<endl;
//    }
//    else cout<<-aux[a-1]+aux[b-1]<<endl;
// }
// }