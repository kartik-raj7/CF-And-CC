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
      string str;
      int z=0,o=0;
      map<int,int>mp;
      int min = 0;int c=0;int k;
      ll arr[n];int maxi=0;int ans=0;
      ll cpy[n];bool flag = true;
      int even=0,odd=0;
      loop(i,0,n){
          cin>>arr[i];
      }
      for(int i=1;i<=n-1;i++){
          if(arr[i-1]>arr[i]){
              c++;
              i++;
            //   cout<<c<<endl;
          }
      }
    //   loop(i,0,n){
    //       cpy[i]=arr[i+1]-arr[i];
    //       if(cpy[i]<0){
    //           flag=false;
    //       }
    //   }
    // 
    cout<<c<<endl;
    }
      }
