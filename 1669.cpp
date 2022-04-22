#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<string,int> m;
        loop(i,0,n){
            string k;
            cin>>k;
            m[k]++;
        }
        ll ans=0;
		for(auto [x,c]:m){
			for(auto [y,b]:m){
				if(x!=y && (x[0]==y[0] || x[1]==y[1])){
					ans+=1ll*c*b;
				}
			}
		}
		cout<<ans/2<<endl;
    }
    return 0;
}