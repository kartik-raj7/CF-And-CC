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
      ll arr[n];
      vector<int> v;
      loop(i,0,n){
          cin>>arr[i];
      }
      ll m;
      cin>>m;
       brr[m];ll sum=0;ll calc;;
      loop(i,0,m){
          cin>>brr[i];
          sum+=brr[i];
          calc = sum%n;
      }
      cout<<arr[calc]<<endl;
      //   int k = brr[i];
        //   for(int j=k-1;j<n-1;j++){
        //       arr[j]=arr[j+1];
        //   }
        //   arr[n-1]=arr[k-1];
        //   for(int i=0;i<n;i++){
        //       cout<<arr[i]<<" ";
        //   }
        //   cout<<endl;
    //   for(int i=0;i<n;i++){
    //       cout<<arr[i]<<" ";
    //   }
   }
}