#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll low = 1, high=h;
        ll ans = h;
        while(low<=high){
            ll mid = (low+high)/2;
            ll s = 0;
            for(int i=0;i<n;i++){
                ll aux = mid;
                if(i<n-1){
                    ll diff = arr[i+1]-arr[i];
                    if(diff<mid) aux = diff;
                }
                s+=aux;
            }
            if(s>=h){
                ans =mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        cout<<ans<<endl;
	}
    }