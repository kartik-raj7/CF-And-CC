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
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
  void solve(){
      ll n;
       cin>>n;
       set<ll> a;
       set<ll> b;
       bool flag = true;
       ll arr[n];
       map<ll,ll>mp;
       ll s = 0 , z = 0;
       loop(i,0,n){
        cin>>arr[i];
        mp[arr[i]]++;
        a.insert(arr[i]);
        s+=arr[i];
        z+= arr[i]==0;
        }
        if(z==n||z==n-1||(z==n-2&&s==0)){
          py;return;
        }
        if(n>10){
          pn;return;
        }
      //  if(n==3){
      //    ll sum = arr[0]+arr[1]+arr[2];
      //   if(!mp[sum])flag = false;
      //  }
       else{
   for(ll i=0;i<n;i++){
    for(ll j=i+1;j<n;j++){
      for(ll k = j+1;k<n;k++){
        ll sum = arr[i]+arr[j]+arr[k];
        if(a.find(sum)==a.end()){
          flag = false;
          break;
        }
      }
    }
   }
   if(flag){py;}
   else pn;
       }
  }
  int main(){
      test{
        solve();
      }
  }
 