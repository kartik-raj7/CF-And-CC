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
int main(){
    test{
        ll n;
        cin>>n;
        set<ll> s;
        ll arr[n];
        ll maxi=0;
        loop(i,0,n){
            cin>>arr[i];
            s.insert(arr[i]);
            ll k = arr[i];
            maxi=max(k,maxi);
        }
        ll lc=0,rc=0;
        ll c=0;
        c=arr[0];
        for(ll i=1;i<n;i++){
            if(arr[i]-arr[i-1]>0){
                c+=(arr[i]-arr[i-1]);
            }
            // else{
            //     lc=max(c,lc);
            //     c=1;
            // }
        }
        // ll maxi =*max_element(arr,arr+n);
        if(c==maxi){
            py;
        }
        else pn;
        // cout<<c<<endl;
        // if(c+1==n){
        //     py;
        // }
        // else pn;
        // c=1;
        // for(ll i=0;i<n-1;i++){
        //     if(arr[i+1]<arr[i]){
        //         c++;
        //     }
        //     else{
        //         rc=max(rc,c);
        //         c=1;
        //     }
        // }
        // cout<<lc<<" "<<rc<<endl;
        // if(lc+rc==n){
        //     py;
        // }
        // else pn;
        // for(ll i=1;i<n;i++){
        //     if(arr[i]>arr[i-1]){
        //         lc++;
        //     }
        //     // else break;
        // }
        // for(ll i=lc;i<n-1;i++){
        //     if(arr[i+1]<arr[i]){
        //         rc++;
        //     }
        //     else break;
        // }
        // if(lc+rc==n){
        //     py;
        // }
        // if(lc==1){
        //     py;
        // }
        // else if(rc>lc){
        //     pn;
        // }
        // else py;
    }
}