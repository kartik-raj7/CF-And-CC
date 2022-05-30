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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   ll n;
   cin>>n;
   ll arr[n];
   ll cpy[n];
   loop(i,0,n){
       cin>>arr[i];
       cpy[i]=arr[i];
   }
   sort(cpy,cpy+n);
     test{
         ll q,l,r;
         cin>>q;ll sum=0;
         cin>>l>>r;
         if(q==1){
             for(int i=l-1;i<=r-1;i++){
                 sum+=arr[i];
             }
         }
         else{
             for(int i=l-1;i<=r-1;i++){
                 sum+=cpy[i];
             }
         }
         cout<<sum<<endl;
        
     }
    }

