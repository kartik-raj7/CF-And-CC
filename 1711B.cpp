#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
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
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
         int n,m;
        cin>>n>>m;
        ll ans=1e18;
        vector<ll>arr(n);
        loop(i,0,n) cin>>arr[i];
        vector<int> a[n];
        loop(i,0,m){
            int u,v;
            cin>>u>>v;
            u--, v--;
            a[u].push_back(v);
            a[v].push_back(u);
            ans = min(ans, arr[u] + arr[v]);
        }
        if(m%2==0){
            ans=0;
        }
        else{
            for(int i = 0; i < n; i++){
        if(a[i].size() % 2 == 1){
            ans = min(ans, arr[i]);
            }
        }
        }
        cout<<ans<<"\n";
        
    }
return 0;
}