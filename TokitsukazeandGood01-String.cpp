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
      map<int,int>mp;int c2=0;
      int min = 0;int c=0;
      ll arr[n];int maxi=0;
      cin>>str;
      for(int i=0;i<n;i+=2){
          if(str[i]!=str[i+1])c++;
      }
    //   loop(i,0,str.length()-1){
    //       if(str[i]==str[i+1]){
    //            c++;
    //       }
    //       else{
    //           if(c%2!=0){
    //               maxi=max(maxi,c);
    //           }
    //           else c=0;maxi=0;
    //       }
    //   }
     cout<<c<<endl;
    }
      }
