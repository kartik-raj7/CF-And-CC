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
    //  ll n,m;
    //  cin>>n;
    //  ll arr[n];
    //  loop(i,0,n){
    //      cin>>arr[i];
    //  }
    //  sort(arr,arr+n);
     test{
         ll n;
         cin>>n;
         bool flag = false;
         if(n<=10){
             if(n==2||n==9){
                 flag = true;
             }
             else flag =false;
         }
         else{
            //  ll ans = n-8;
            //  double k = cbrt(ans);
            //  if(floor(k)==k){
            //      py;
            //  }
            //  else pn;
            for(double i=1;i*i*i<n;i++){
                double k = cbrt(n-pow(i,3));
                if(floor(k)==k&&(k>=1)){
                    flag = true;
                    break;
                }
            }
         }
         if(flag){py;}
         else pn;
        //  ll c=0;
         
        //  int low =0,high = n;int mid;int i;
        //  for(i=0;i<n;i++){
        //      if(arr[i]>k){
        //          break;
        //      }
        //  }
        //  c = 
        //  while(low<=high){
        //      mid = low+(high-low)/2;
        //     //  if(k==arr[mid]){
        //     //      c++;
        //      if(k>arr[mid]){
        //          low = mid+1;
        //      }
        //      else high = mid-1;break;}
        
     }
    }

