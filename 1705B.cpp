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
#define test ll t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
      ll n;
      cin>>n;
      ll arr[n];
      ll aux[n];
      ll zero = 0;
      for(ll i=0;i<n;i++){
        cin>>arr[i];
        // cin>>aux[i];
        zero++;
      }
      ll leading = 0;
      while(leading<n-1&&arr[leading]==0){
        leading++;
      }
      if(leading==n-1){
        cout<<0<<endl;continue;
      }
      ll ans=0;
      for(ll i=leading;i<n-1;i++){
         ans+=arr[i];
         if(arr[i]==0)ans++;
      }
      cout<<ans<<endl;
    //   int sum =  accumulate(arr,(arr+n-1,0);
    //   cout<<sum<<endl;
    //   sort(arr,arr+n);
    //   if(zero==n-1)cout<<0<<endl;
    // else if(aux[n-1]==0){
    //     int k = accumulate(arr,arr+n,0);
    //     cout<<k+1<<endl;
    // }
    // else cout<<accumulate(arr,arr+n-1,0)+zero<<endl;
}
}