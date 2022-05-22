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
       cin>>n;
       int ans=0;
       int c=0,b=1;
       int arr[n];
       int cpy[n];
       loop(i,0,n){
           cin>>arr[i];
           cpy[i]=arr[i];
       }
       map<int,int>mp;
       loop(i,0,n){
           mp[arr[i]]++;
       }
       for(auto i:mp){
           if(i.second>=2){
               ans++;
           }
           else c++;
       }
       if(c>0){
           ans++;
           c--;
       }
       ans+=c/2;
       cout<<ans<<endl;}
    //   while(c>0){
    //       ans++
    //       c--;
    //   }
    //   cout<<ans/2<<endl;
    //    reverse(cpy,cpy+n);
//       for(int i=0;i<n-1;i++){
//              if(arr[i]<arr[i+1]){
//                  a++;
//              }
//              else{
//                  ans=max(ans,a);
//                  a=0;
//              }
//        }
//        for(int i=0;i<n-1;i++){
//              if(cpy[i]<cpy[i+1]){
//                  b++;
//              }
//              else{
//                  ans=max(ans,b);
//                   b=0;
//              }
//        }
//      cout<<ans<<endl;
//    }
}