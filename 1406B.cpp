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
       ll arr[n];
       loop(i,0,n){
        cin>>arr[i];
       }
    //    sort(arr,arr+n);
       ll neg=0;
    //    ll ans=1;
    //    for(ll i=0;i<n;i++){
    //     if(arr[i]<0)neg++;
    //    }
    //    if(neg==n){
    //      for(ll i=0;i<5;i++){
    //         ans*=arr[i];
    //      }
    //    }
    //    else{
       sort(arr,arr+n,greater<ll>());
       ll ans =arr[0];
       for(ll i=1;i<5;i++){
         ans*=arr[i];
       }
        ll k = arr[0]*arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4];
        ll s = arr[0]*arr[1]*arr[2]*arr[n-1]*arr[n-2];
        // k>s?cout<<k<<endl:cout<<s<<endl;
        cout<<max({k,s,ans})<<endl;
       }
    }