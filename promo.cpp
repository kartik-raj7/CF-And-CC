#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#define pb push_back
#include <queue>
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std; 
 int n,m,k,a[1007],i,ans;
int main(){
	cin>>n>>m>>k;
	for(i=0;i<=m;i++)cin>>a[i];
	for(i=0;i<m;i++){
		if(__builtin_popcount(a[i]^a[m])<=k)ans++;
	}
	cout<<ans;
}
int main(){
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    ll cpy[n];
    loop(i,0,n){
        cin>>arr[i];
       cpy[i]=arr[i];
    }
    sort(cpy,cpy+n);
    while(q--){
    ll x,y;
    vector<ll> v;
    cin>>x>>y;
    ll ans=0;
    ///////////////////////////////////
    // if(x==1&&y==1){
    //     ans=cpy[n-1];
    // }
    // else if(x<n&&x>1){
    // for(int i=x-1;i<n-y+1;i++){
    //    ans+=cpy[i];
    // }
    // }
    // else{
    //     for(int i=0;i<n-y+1;i++){
    //         ans+=cpy[i];
    //     }
    // }
    ////////////////////////////////////
    // if(x<n){
    // for(ll i=n-1;i>=x-1;i--){
    //     v.push_back(cpy[i]);
    // }
    // // reverse(v.begin(),v.end());
    // ans = 0;
    // for(int i=y;i>0;i--){
    //  ans+=v[i];
    // }
    // }
    // else{
    // ans=0;
    //   for(int i=0;i<y;i++){
    //     // cout<<cpy[i]<<" ";
    //     ans+=cpy[i];
    //   }
    // }
    ///////////////////////////////////////
    if(x<n){
    for(ll i=n-1;i>=abs(n-x);i--){
        v.push_back(cpy[i]);
    }
    reverse(v.begin(),v.end());
    ans = 0;
    loop(i,0,y){
     ans+=v[i];
    }
    }
    else{
    ans=0;
      for(int i=0;i<y;i++){
        ans+=cpy[i];
      }
    }   
    cout<<ans<<endl;
 }
}