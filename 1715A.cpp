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
        int n,m;
        cin>>n>>m;
        if(n==1&&m==1){
            cout<<0<<endl;
        }
        else{
        ll ans=0;
        if(m<=n){
        ans = 2*m+n-2;}
        else{
            ans = 2*n+m-2;
        }
        cout<<ans<<endl;
    }
    }
}