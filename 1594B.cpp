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
   test{
       int n,m;
       cin>>n>>m;
       if(n==2)cout<<m<<endl;
       else{
       ll ans=0;
       int binary[32];
       int i = 0;
       while (m > 0) {
        binary[i] = m % 2;
        m = m / 2;
        i++;
    }
    ll c = 1;
    for(int j=0;j<=i-1;j++){
        
        if(binary[j]==1){
            ans+=(c%MOD);
        }
        c= ((c*n)%MOD);
        // else ans+=pow(n,0);
    }
    cout<<ans%MOD<<endl;
    }
   }}