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
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    test{
        ll n;
       cin>>n;
       ll aux[n];
       ll arr[n+2];
       vector<ll> v;
       v.push_back(0);
       loop(i,1,n){
        ll x;
        cin>>x;
        v.push_back(x);
       }
       v.push_back(0);
    //    if(n==1){
    //     if(v[0]==0)cout<<0<<endl;
    //     else cout<<1<<endl;
    //    }
       ll c=0;
       ll zero = count(v.begin(),v.end(),0);
       for(ll i=1;i<n+2;i++){
        if(v[i]==0&&v[i]!=v[i-1])c++;
       }
       if(zero==n+2)cout<<0<<endl;
        else if(c==1)cout<<1<<endl;
        else cout<<2<<endl;
}
}