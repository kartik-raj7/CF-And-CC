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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
   ll n;
   cin>>n;
   ll arr[100005];
   ll cpy[100005];
   for(int i=1;i<=n;i++){
       cin>>arr[i];
       cpy[i]=arr[i];
       arr[i]=arr[i]+arr[i-1];
   }
   sort(cpy+1,cpy+n+1);
   for(int i=1;i<=n;i++){
       cpy[i]=cpy[i]+cpy[i-1];
   }
     int t;
     cin>>t;
     while(t--){
         ll q,l,r;
         cin>>q>>l>>r;
         if(q==1){
             cout<<arr[r]-arr[l-1]<<endl;
             }
         else{
             cout<<cpy[r]-cpy[l-1]<<endl;
         }
        
     }
    }

