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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;
        ll arr[n];
        long long ans = 0;
        multimap<int,int>mp;
        vector<int> v;
        loop(i,1,n){
            cin>>arr[i];
        }
        loop(i,1,n){
             if(arr[i]>=i){
                continue;}
               ans+=(ll)(lower_bound(v.begin(),v.end(),arr[i])-v.begin());
               v.pb(i);
            }
            // for(auto it:v){
            //     cout<<it<<" ";
            // }

           
    //             mp[arr[i]]=i;
    //         }
    //     }
    //    for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
    //    }
     cout<<ans<<endl;
}
}