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
   test{
      char ch;
      string str;
      cin>>str;
      cin>>ch;
      int n = str.length();
      bool flag = false;
      int k = (n+1)/2;
      for(int i=0;i<n;i++){
          if(ch==str[i]&&i%2==0){
              flag = true;break;
          }
      }
      if(flag){
          py;
      }
      else pn;
    //   cout<<k<<endl;
    //   if(str[k-1]==ch){
    //       py;
    //   }
    //   else pn;

      

   }
}