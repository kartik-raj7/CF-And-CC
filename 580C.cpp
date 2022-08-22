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
#define test ll t; cin>>t;  while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int ans=0;
int arr[100001];
vector<int>adj[100001];
void dfs(int a,int b,int c,int m){
    if(arr[a]==1)c++;
    else c=0;
    if(c>m)return;
    for(int i=0;i<adj[a].size();i++){
        if(b==adj[a][i])continue;
        dfs(adj[a][i],a,c,m);
    }
    if(a!=1&&adj[a].size()==1)ans++;
}
int main(){
        int n,m;
        cin>>n>>m;
        loop(i,1,n){
            cin>>arr[i];
        }
        int q = n;
        q--;
        while(q--){
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        dfs(1,0,0,m);
        cout<<ans<<endl;
        // for(int i=1;i<=n;i++){
        //     for(auto it:adj[i]){
        //         cout<<it<<" ";
        //     }
        //     cout<<endl;
        // }
    //     int counter = arr[0];
    //     int ans=0;
    //     vector<bool>vis(n,false);
    //     for(int i=1;i<=n;i++){
    //        if(!vis[i]){
    //         for(auto it:adj[i]){
    //             vis[it]=true;
    //             if(arr[it]==1){
    //                 counter++;
    //             }
    //             if(counter>m){
    //                 counter=0;
    //                 ans+=adj[it].size();
    //             }
    //         }
    //     }
    // }
    // cout<<ans<<endl;
    }