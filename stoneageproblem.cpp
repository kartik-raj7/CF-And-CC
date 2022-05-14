#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
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
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
map<string,string>mp;
ll n,q;
cin>>n>>q;
ll arr[n];ll sum=0;
loop(i,0,n){
 cin>>arr[i];}
 for(auto s:arr){
  sum+=s;
 }
 bool flag = false;
set<ll> sets;
ll value=0;
 while(q--){
ll k,l,m;
cin>>k;
if(k==1){
    cin>>l>>m;
    l=l-1;
    ll chg=0;
    if(flag){
        if(sets.find(l)!=sets.end()){
            chg=m-arr[l];
        }
        else {chg = m-value;}
    arr[l]=m;
    sets.insert(l);
}
else{
   chg = m-arr[l];
   arr[l]=m;
}
sum+=chg;
cout<<sum<<endl;

 }
 else {
     ll m;
     cin>>m;
     sum=m*n;
     flag = false;
     value = m;
     sets.clear();
     cout<<sum<<endl;
 }
}
}