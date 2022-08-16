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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
        test{
        int n,k;
        cin>>n>>k;
        vector<bool>vis(n,false);
        // map<int,int>mp;
        set<int> s;
        vector<pair<int,int>>mp;
        loop(i,1,n){
          s.insert(i);
        }
        // if(k==0){
        //     pn;
        // }
        // else if(n==k){
        //     pn;
        // }
        ll ans=0;
        for(int i=1;i<n;i+=2){
            ans = ((i+k)*(i+1));
            if(ans%4==0) mp.pb({i,i+1});
            else {
                ans=((i+k+1)*(i));
                if(ans%4==0){
                    mp.pb({i+1,i});
                }
            }
        }
        if(mp.size()==n/2){
            py;
            for(auto i:mp){
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
        else {
            pn;
        }
       
        } 
}