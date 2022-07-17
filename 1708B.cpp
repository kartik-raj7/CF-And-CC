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
        ll n,l,r;
        vector<int> v;
        cin>>n>>l>>r;
        if((r-l+1)<n){pn;}
        else if(n==1){py;cout<<l<<endl;}
        else{
            if(r-l+1==n){
                py;
                for(int i=l;i<=r;i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            else{
            v.pb(l);
            int k;
            l++;
            for(int i=2;i<=n;i++){
                if(l%i==0){
                    v.pb(l);
                }
                else{
                      k = ((l/i)+1)*i;
                      if(k<r)v.pb(k);
                      else break;
                }
            }
                if(v.size()==n){
                    py;
                    for(auto i:v){
                        cout<<i<<" ";
                    }
                    cout<<endl;
                }
                else {pn};
                // if(__gcd(i,k)==k){
                //     v.pb(k);
                // }
            }

        }
}
}