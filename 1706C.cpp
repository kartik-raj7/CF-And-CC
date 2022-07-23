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
ll solve(int i,ll arr[]){
    return max(0ll,max(arr[i-1],arr[i+1])-arr[i]+1);
}
int main()
{
    test{
        ll n;
        cin>>n;
        ll arr[n+1];
        loop(i,1,n){
            cin>>arr[i];
        }
        if(n%2==1){
              ll ans=0;
           for(int i=2;i<n;i+=2){
            //    int maxi = max(arr[i-1],arr[i+1]);
            ans+=solve(i,arr);
            //    if(maxi<arr[i]){
            //     ans+=0;
            //    }
            //    else ans+=(maxi-arr[i]+1);
           }
           cout<<ans<<endl;
        }
        else{
            ll ans=0;
            for(int i=2;i<n;i+=2){
                ans+=solve(i,arr);}
            ll aux = ans;
            for(int i=n-1;i>=3;i-=2){
                ans+=solve(i,arr);//for odd positions
                ans-=solve(i-1,arr);//subtracting even position previously added
                aux=min(ans,aux);//calculating minimum ans
            }
            cout<<aux<<endl;
        }
        //        int maxi = max(arr[i-1],arr[i+1]);
        //        if(maxi<arr[i]){
        //         ans+=0;
        //        }
        //        else ans+=(maxi-arr[i]+1);
        //    }
        // }
    }
}