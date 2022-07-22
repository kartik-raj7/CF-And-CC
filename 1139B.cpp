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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
long long n, k=2000000000, a[200050], ans;
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>0;i--)
	{
		k=min(k-1, a[i]);
		if(k<0) k=0;
		ans+=k;
	}
	cout<<ans;
}
//        ll n;
//        cin>>n;
//        ll k = 2e5+5;
//        ll arr[k];
//        ll ans=0;
//        for(int i=1;i<=n;i++){
//         cin>>arr[i];
//        }
//        for(ll i=n;i>0;i--)
// 	{   
//         ll a = arr[i];
// 		k= min(k-1,a);
// 		if(k<0) k=0;
// 		ans+=k;
// 	}
//     cout<<ans<<endl;
// }
    //    int curr = INT_MAX;
    //    int ans = 0;
       ////////////////////////////////////
    //    for(ll i=n;i>=1;i--){
    //     // curr =  (curr-1<arr[i])?curr-1:arr[i];
    //     if(curr-1<arr[i]){
    //         curr = curr-1;
    //     }
    //     else if(curr-1>=arr[i]){
    //         curr = arr[i];
    //     }
    //     if(curr<0){
    //         curr=0;
    //     }
    //     ans+=curr;
        /////////////////////////////
        //   if(i-1<=arr[i]){
        //     if(i-1>0){
        //     ans+=(i-1);
        //   }}
        //   else ans+=arr[i];
        //   cout<<ans<<endl;
        // for(ll i =n-2;i>=0;i--){
        //     if(arr[i]>=arr[i+1]){
        //         ll k = arr[i+1]-1;
        //         if(k>0){
        //             arr[i]=k;
        //         }
        //         else arr[i]=0;
        //     }
        // }
        // int sum = accumulate(arr,arr+n,0);
    //    cout<<sum<<endl;
    // }