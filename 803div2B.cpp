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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        ll n,q;
       cin>>n>>q;
       ll arr[n];
       loop(i,0,n){
        cin>>arr[i];
       }
       int c=0;
      loop(i,1,n-1){
        if(arr[i]>arr[i-1]+arr[i+1]){
            c++;
        }
      }
      if(q==1){
        cout<<(n-1)/2<<endl;
      }
      else cout<<c<<endl;
}
}