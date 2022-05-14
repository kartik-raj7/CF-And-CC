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
ll arr[n];
loop(i,0,n){
 cin>>arr[i];}
 while(q--){
ll k,l,m;
cin>>k;ll sum=0;
if(k==1){
    cin>>l>>m;
    arr[l-1]=m;
    ll x=accumulate(arr,arr+n,0);
cout<<x<<endl;
}
else{
   cin>>l;
   fill(arr,arr+n,l);
   cout<<l*n<<endl;
}

 }
}
