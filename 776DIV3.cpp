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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    ll l,r,x;
    cin>>l>>r>>x;
    ll temp=0;
    ll ans=0;
    if(r/x!=l/x) cout<<x-1+(r-x+1)/x<<endl;
		else if(r<x) cout<<r<<endl;
		else cout<<r/x+r%x<<endl;
    // if(r%x==0){
    //     ans = (r-1)/x+(r-1)%x;
    //     cout<<ans<<endl;
    // }
    // else{
    //     ans=r/x+r%x;
    //     cout<<ans<<endl;
    // for(int i=l;i<=r;i++){
    //     temp=i/x+i%x;
    //     ans= ans>temp?ans:temp;
    // }
    // cout<<ans<<endl;
    }
   }