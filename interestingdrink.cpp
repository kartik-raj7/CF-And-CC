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
     ll n,m;
     cin>>n;
     ll arr[n];
     loop(i,0,n){
         cin>>arr[i];
     }
     sort(arr,arr+n);
     test{
         ll k;
         cin>>k;
         cout<<upper_bound(arr,arr+n,k)-arr<<endl;
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

