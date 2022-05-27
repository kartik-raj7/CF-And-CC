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
      map<int,int>mp;
      cin>>str;
      int zero=0,one=0,ans=0;int i;
      for(int i=0;i<str.length()-1;i++){
          if(str[i]=='0'&&str[i+1]=='0'){
              ans+=2;}
          if(i+2<n&&str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0'){
              ans++;
          }
      }
      cout<<ans<<endl;
    //       if(str[i]=='0'){
    //           zero++;
    //       }
    //       else one++;
    //   }
    //   loop()
    // //   cout<<zero<<"  "<<one<<endl;
    //   if(one>zero){
    //      cout<<0<<endl;
    //   }
    //   else cout<<zero-one+1<<endl;
    }
      }
