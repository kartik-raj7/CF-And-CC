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
      int n;
      cin>>n;
      int arr[n];
      vector<int> v;
      loop(i,0,n){
          cin>>arr[i];
      }
      int m;
      cin>>m;
      int brr[m];
      loop(i,0,m){
          cin>>brr[i];
      }
    sort(arr,arr+n);
    sort(brr,brr+m);
    if(arr[n-1]>brr[m-1]){
        puts("Alice");
        puts("Alice");
    }
    else if(brr[m-1]>arr[n-1]){
        puts("Bob");
        puts("Bob");
    }
    else{ puts("Alice");puts("Bob");}
   }
}