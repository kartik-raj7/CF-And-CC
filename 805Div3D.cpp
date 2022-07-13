#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#include <iomanip>
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
     ll n,q;
     cin>>n>>q;
     unordered_set<int> s;
     set<int> sta;
     map<ll,set<int>>mp;
     ll arr[n];
     loop(i,0,n){
        cin>>arr[i];
        sta.insert(arr[i]);
        mp[arr[i]].insert(i);
        // if(mp[arr[i]].first==0){
        // mp[arr[i]].first=i;
        // }
        // if(mp[arr[i]].first>0){
        //     mp[arr[i]].second=i;
        // }
     }
     while(q--){
        ll st,end;
        cin>>st>>end;
          ll a = 1e9;
          if(mp[st].size()>0){
          a = *mp[st].begin();}
          ll b = -1;
          if(mp[end].size()>0){
          b = *mp[end].rbegin();
          }
        // if(sta.find(st)==sta.end()||sta.find(end)==sta.end()){pn;}
      
        // ll c = mp[end].first;
        if(a<b){
            py;}
        else pn;
     }
   }
}
        // int st,end;
        // cin>>st>>end;
        // if(s.find(st)==s.end()||s.find(end)==s.end()){
        //     pn;
        // }
        // else{
        //     int st1=0,end1=0;
        //     int st2=0,end2=0;
        //     for(int i=0;i<n;i++){
                
        //         if(arr[i]==st){
        //             if(st1==0)st1=i;
        //             else st2=i;
        //             }
        //         if(arr[i]==end){
        //             if(end1==0)end1=i;
        //             else end2=i;
        //         }
        //         }
        //     if(st1<end2||st1<end1){
        //         py;
        //     }
        //     else pn;
    //      }
    //  }