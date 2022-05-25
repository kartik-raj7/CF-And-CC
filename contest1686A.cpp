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
      int min = 0;int c=1;int k;
      ll arr[n];int maxi=0;
      ll cpy[n];bool flag = false;
      int even=0,odd=0;
      loop(i,0,n){
          cin>>arr[i];
        //   
      }
      //   loop(i,0,n){
    //       cpy[i]=arr[i+1]-arr[i];
    //       if(cpy[i]<0){
    //           flag=false;
    //       }
    //   }
    // if(odd==even)flag=false;
    // if(abs(odd-even)==1)flag=true;
    // if(odd==0||even==0)flag=false;
    //   if(c==n){
    //       flag=true;
    //   }
      int calc = accumulate(arr, arr+n, 0);
      k = arr[0];
      loop(i,0,n){
          if((calc-arr[i]==arr[i]*(n-1))){
              flag=true;break;
          }
      }
    
      if(flag){py;}
      else pn;
    }
      }
