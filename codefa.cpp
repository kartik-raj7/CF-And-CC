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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
      ll n;
      cin>>n;
      map<int,int>mp;int c2=0;
      int min = 0;int c=0;
      ll arr[n];int sum=0;
      ll ans=n+1;
      loop(i,0,n){
          cin>>arr[i];
          mp[arr[i]]++;
         
      }
      loop(i,0,n){
          if(arr[i]==0){
              c++;
          }
      }
    //   if(c==n){
    //       cout<<n+1<<endl;
    //   }
    //   else if(c){
    //       cout<<n-c<<endl;
    //   }
    //   else cout<<n<<endl;
      for(auto i:mp){
          if(i.second>1){
            c2=1;
            }}
      if(c>0){
          cout<<n-c<<endl;
      }
      else cout<<n+1-c2<<endl;

    }
      }
