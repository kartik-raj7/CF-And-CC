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
       ll n,k;
       cin>>n>>k;
       if(k==1)cout<<n<<endl;
       else{
        ll ans=1;
        while(ans<=n){
            ans*=2;
        }
        cout<<ans-1<<endl;
    //    ll ans=1;
    //    for(int i=2;i<k;i++){
    //       ans^=i;
    //    }
    //    ans=ans^n;
    //    cout<<ans<<endl;
       }
    //    if(n==m){
    //      for(int i=2;i<=n;i++){
    //         ans^=i;
    //      }
    //      cout<<ans%MOD<<endl;
    //    }
    //    else cout<<(n^m)<<endl;
   }