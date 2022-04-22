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
        cin>>n;
        ll k;
        cin>>k;
        bool flag = true;
       vector<ll> v(n);
       loop(i,0,n){
           cin>>v[i];
       }
  sort(v.begin(),v.end());
  ll sum = 0;
  ll ans=0;
  loop(i,0,n){
    sum+=v[i];
    ll t = sum;
    if(t>k)continue;
    ll f = ((k-t))/(i+1);
    f++;
    ans+=f;
  }
  cout<<ans<<endl;
}
return 0;}
