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
   test{
      int n;
      cin>>n;
    //   int arr[n],cpy[n];
      vector<int> cpy(n);
      loop(i,0,n-1){
          cin>>cpy[i];
        //   cpy[i]=arr[i];
      }
      sort(cpy.begin(),cpy.end());
      int ans=0;
      loop(i,0,2*n){
          int low =0,high = n-1;int c=0;
          while(low<high){
              if((cpy[low]+cpy[high])==i){
                    c++;
                    low++;
                    high--;
                    continue;
              }
              if(cpy[low]+cpy[high]<i){
                  low++;continue;
              }
              if(cpy[low]+cpy[high]>i){
                high--;continue;
              }
          }
          ans = max(ans,c);
      }
      cout<<ans<<endl;
   }
     }

