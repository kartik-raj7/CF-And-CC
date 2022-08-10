#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
ll print(ll n,vector<int>&v){
    cout<<v[n]<<" ";
    if(n==v.size()-1)return 0;
    return print(n+1,v);
}
int main(){
test{
int n;
cin>>n;
int arr[n];
map<int,int>mp;
int maxi=0;
int el = 0;
loop(i,0,n){
    cin>>arr[i];
    if(i!=0&&arr[i]!=arr[i-1]) mp[arr[i]]++;
    // if(mp[arr[i]]>maxi){
    //     maxi = mp[arr[i]];
    //     el = arr[i];
    // }
}
mp[arr[n-1]]--;
// if(mp.size()==1){
//     cout<<0<<endl;
// }
// else if(mp.size()==n){
//     cout<<1<<endl;
// }
// else{
   int ans = INT_MAX;
   for(int i=0;i<n;i++){
    int k = mp[arr[i]];
    ans=min(ans,k);
   }
   cout<<ans+1<<endl;
}
}

    ///////////////////////////
    // vector<int> adj;
    // adj.pb(0);
    // int k = arr[0];
    // int prev = 0;
    // for(int i=1;i<n;i++){
    // if(arr[i]==k){
    //     adj.pb(i);
    // }
    /////////////////////////////////////
    //  if(arr[i]==k&&((i-adj.back())>1)){
    //     adj.pb(i);
    //  }
    //  else if(arr[i]==k&&((i-adj.back())==1)){
    //     adj.pop_back();
    //  }
    //////////////////////////////////////
//     sort(adj.begin(),adj.end());
//     vector<int> aux;
//     int ans=0;
//     for(int i=0;i<adj.size();i++){
//         if(adj[i+1]-adj[i]==1){
//             i++;
//         }
//         else{
//             aux.pb(adj[i]);
//             aux.pb(adj[i+1]);
//             i++;
//         }
//     }
//     for(auto i:aux){
//         cout<<i<<" ";
//     }
// cout<<aux.size()-1<<endl;
