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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<ll>ans(n,0);
        ll solve = b*k;
        s-=solve;
        ans[0] = solve;
        if(s<0)cout<<-1<<endl;
        else{
            for(ll i=0;i<n;i++){
            ll mins = min(k-1,s);
            ans[i]+=mins;
            s-=mins;
        }
        if(s>0){
            cout<<-1<<endl;
        }
        else{
            loop(i,0,n){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        }
    }
}
    //     if(solve>s){
    //         cout<<-1<<endl;
    //     }
    //     else if(solve==s&&(n*n)<=k){
    //         for(int i=0;i<n-1;i++){
    //             cout<<0<<" ";
    //         }
    //         cout<<b*k<<endl;
    //     }
    //     else if(solve==s&&(n*n)>=k){
    //        cout<<-1<<endl;
    //     }
    //     else if(solve+1==s&&(n*n)<=k){
    //         for(int i=0;i<n-1;i++){
    //             cout<<0<<" ";
    //         }
    //         cout<<b*k+1<<endl;
    //     }
    //      else if(solve==s&&(n*n)>=k){
    //        cout<<-1<<endl;
    //     }
    //     else{
    //         ll ans = b*k+1;
    //         ll diff = s-ans;
    //         int val = 0,num=0;
    //         // // if(k==b){
    //         // //     for(int i=0;i<n-1;i++){
    //         // //         cout<<0<<" ";
    //         // //     }
    //         // //     cout<<s<<endl;
    //         // // }
    //         // for(int i=1;i<k;i++){
    //         //     if(diff%i==0){
    //         //         val = diff/i;
    //         //     }
    //         // }
    //         // if(val==0||val>n-1){
    //         //     cout<<-1<<endl;
    //         // }
    //         // else{
    //         //     for(int i=0;i<(n-i)-val;i++){
    //         //         cout<<0<<" ";
    //         //     }
    //         //     for(int i=0;i<val;i++){
    //         //         cout<<val<<" ";
    //         //     }
    //         //     cout<<ans<<endl;
    //         // }
    //         if(diff/k-1>n-1){
    //             cout<<-1<<endl;
    //         }
    //         else{
    //             ll s = diff/(k);
    //             cout<<ans<<" ";
    //             for(int i=0;i<s;i++){
    //                 cout<<diff/(k-1)<<" ";
    //             }
    //             if((n-1)-s>0){
    //                 for(int i = 0;i<(n-1)-s;i++){
    //                     cout<<0<<" ";
    //                 }
    //                 cout<<endl;
    //             }
    //         }
    //     }
    //     }
    // }
