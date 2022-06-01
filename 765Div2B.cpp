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
   test{
      ll n;
      cin>>n;
      ll arr[n];int k;
      ll c=0;int f=1;ll begin = 0;
      map<int,int> mp;
      bool flag = true;
      loop(i,0,n){
          cin>>arr[i];
        //   if(arr[i]<=i){
        //           c++;
        mp[arr[i]]++;
      }
      for(auto i:mp){
          if(i.second==1)
          {
              flag=false;
          }
      }
      if(flag==false){
        cout<<-1<<endl;
      }
      else{
          loop (i,1,n){
              if(arr[i]==arr[begin]){
                  cout<<i+1<<" ";
              }
              else {cout<<begin+1<<" ";
              begin = i;
          }
      }
      cout<<begin+1<<endl;}
    //   else cout<<-1<<endl;
    //   loop(i,1,n){
              
    //           }}
    //   if(arr[n-1]>=n-1){
    //       cout<<-1<<endl;
    //   }
    //    if(c==n){
    //           cout<<n<<" ";
    //           loop(i,1,n-1){
    //            cout<<i<<" ";
    //    }
    //        cout<<endl;
    //       }
    //     else cout<<-1<<endl;
        //   else cout<<-1<<endl;
    //  if(c==n){
    //      cout<<n<<" ";
    //      loop(i,1,n){
    //          cout<<i<<" ";
    //      }
    //      cout<<endl;
    //  }
    //  else{
    //      loop(i,0,n-1){
    //          if(arr[i]!=arr[i+1])f++;
    //      }
    //      if(f==n){
    //          cout<<-1<<endl;
    //      }
     }
   }