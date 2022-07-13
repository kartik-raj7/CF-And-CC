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
ll sum(ll n){
    return (n*(n+1))/2;
}
int main(){
    ll a,b;
    cin>>a>>b;
    ll n = a-1;
    ll k =  sum(b-1);
    if(a==b)cout<<1<<endl;
    // else if(a==1)cout<<1<<endl;
    /////////tle on brute force approach////
    // else{
    //     ll n = b-1;
    //     ll k =  n*(n+1)/2;
    //     // cout<<k<<endl;
    //     ll c=0;
    //     if(a<=k+1){
    //         ll ans = 1;
    //         for(ll i=b;i>=1;i--){
    //             ans+=(i-1);
    //             c++;
    //             if(ans==a){
    //                 cout<<c;break;
    //             }
    //         }
    //     }
    //     else cout<<-1<<endl;
    
    else if(n>k)cout<<-1<<endl;
    else{
        ll low = 0, high = b-1;
        while(low<=high){
            ll mid = low+(high-low)/2;
            if(k-sum(mid)>=n) low = mid+1;
            else high = mid-1; 
        }
        cout<<b-1-high;
    }
    }