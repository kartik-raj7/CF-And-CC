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
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
       int n;
       cin>>n;ll ans=0;
       ll arr[n];int e=0,o=0;ll cpy[n];vector<ll> odd,even;
       loop(i,0,n){
         cin>>arr[i];
         cpy[i]=arr[i];
       }
       sort(arr,arr+n,greater<int>());
       loop(i,0,n){
       if(i%2==0){
           if(arr[i]%2==0)
           {
               ans+=arr[i];
           }}
           else{
               if(i%2==1){
               if(arr[i]%2==1){
                  ans-=arr[i];
               }
           }
       }}
       if(ans==0){
            puts("Tie");
       }
       else if(ans>0){
           puts("Alice");
       }
       else puts("Bob");
       }
       }
//          if(arr[i]%2==0){e++;even.pb(arr[i]);}
//          else o++;odd.pb(arr[i]);
//        }
//        sort(even.begin(),even.end(),greater<int>());
//        sort(odd.begin(),odd.end(),greater<int>());
//        if(e==n){
//            puts("Alice");
//        }
//        else if(o==n){
//            puts("Bob");
//        }
//        else{
//           if(e==o){
//               alice = accumulate(even.begin(),even.end(),0);
//               bob = alice = accumulate(even.begin(),even.end(),0);
//               if(alice>bob){
//                    puts("Alice");
//               }
//                else if(alice==bob){
//                   puts("Tie");
//               }
//               else puts("Bob");
//           }
//           else{
//               int k = abs(e-o);
//               for(int i=0;i<k;i++){
//                   alice+=even[i];
//                   bob+=odd[i];
//               }
//               if(alice>bob){
//                    puts("Alice");
//               }
//               else if(alice==bob){
//                   puts("Tie");
//               }
//               else puts("Bob");
//           }
//        }
//    }
//     }
