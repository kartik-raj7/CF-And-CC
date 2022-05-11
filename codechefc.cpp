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
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
test{
ll n,m;
cin>>n>>m;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(find(arr,arr+n,m)!=arr+n){
    py;
}
else {
  ll mini = *min_element(arr,arr+n);
  ll maxi = *max_element(arr,arr+n);
  if(mini<m&&maxi>m){py;}
  else pn;
   }
   }
return 0;}