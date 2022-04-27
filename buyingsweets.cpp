#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#define pb push_back
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;

bool cmp(pair<ll,pair<ll,ll>> &x1, pair<ll,pair<ll,ll>> &x2)
     {
 if(x1.first < x2.first) return true;
 else if(x1.first == x2.first){
  if(x1.second.first > x2.second.first) return true;
        else if(x1.second.first == x2.second.first){
            if(x1.second.second < x2.second.second) return true;
        }
 }
 return false;
}
int main(){
        int t;
        cin>>t;
        while(t--){
        int n;
        int r;
        cin>>n;
        cin>>r;      
        
    vector<int> prc;
     vector<int> cb;
     for(int i = 0; i<n; i++) {
        int h ; cin >> h;
        prc.pb(h);
     }
     for(int i = 0; i< n; i++){
        int h ; cin >> h;
        cb.pb(h);
     }
     
     vector<pair<ll,pair<ll,ll>>> tmp(n);
     for(int i =0; i< n;i++){
            tmp[i].first = prc[i]-cb[i];
          tmp[i].second.first = cb[i];
          tmp[i].second.second = prc[i];
     }
     
     sort(tmp.begin(),tmp.end(), cmp);
     
        ll result = 0;
        int i = 0;
        while(i < n){
            
            if(r >= tmp[i].second.second){
                int th = ((r-tmp[i].second.second)/tmp[i].first);
                th++;
                result += th;
                r -= (th*tmp[i].first);
            
            }
            i++;
        }
        cout << result << endl;
 }
 
 return false;
}