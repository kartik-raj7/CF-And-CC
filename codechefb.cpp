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
#define ll long long
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
test{
ll n;
cin>>n;ll arr[n];ll brr[n];
map<pair<ll,ll>,ll>mp;
loop(i,0,n){
  cin>>arr[i];
}
loop(i,0,n){
  cin>>brr[i];
}
ll  ans = 0;
for(ll i =0;i<n;i++){
    pair<ll,ll> pa = {brr[i],arr[i]};
    if(mp.find(pa)!=mp.end()){
        ans+=mp[pa];
    }
    pair<ll,ll> qa = {arr[i],brr[i]};mp[qa]++;
}
cout<<ans<<endl;
   }
return 0;}





































