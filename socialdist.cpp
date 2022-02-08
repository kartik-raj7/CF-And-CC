#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <vector>
#include <set>
#include <string>
#define ll long long
#define pb push_back
#define pb push_back
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    set<int> a;
    string s;
    cin>>s;int c=0;
    for(ll i=0;i<n;i++){
         if(s[i]=='1')
         a.insert(i);
    }
    for(ll i=0;i<n;i++){
      if(s[i]=='0'){
          auto it=a.lower_bound(i-k);
          if(it==a.end() || *it>i+k){
              c++;
              s[i]='1';
              a.insert(i);
          }
      }
}
cout<<c<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}