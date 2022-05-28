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
      ll n,target;
      cin>>n>>target;
     ll arr[n];bool flag = false;ll sum=1;
     ll copy[n];
     loop(i,1,n){
         cin>>arr[i];
     }
     loop(i,1,n){
         if(i==sum)sum+=arr[i];
         if(sum==target){
             flag=true;break;
     }}
     if(flag==true){py;}
     else pn;
    }

