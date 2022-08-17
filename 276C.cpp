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
#include <vector>
#include <numeric> 
#include <algorithm>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
ll aux[200005];
ll ans[200005];
ll arr[200005];
int main(){
    ll n,q;
    cin>>n>>q;
    ll a,b;
    loop(i,1,n){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    memset(aux,0,sizeof(aux));
    while(q--){
      cin>>a>>b;
      aux[a]++;
      if(b<n){
        aux[b+1]--;
      }
    }
   
    ll sum = 0;
    loop(i,1,n){
       sum+=aux[i];
       ans[i]=sum;
    }
    sort(ans+1,ans+n+1);
    ll sol = 0;
    loop(i,1,n){
        sol+=(arr[i]*ans[i]);
    }
    cout<<sol<<endl;
}