#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
{ test{
   string a,b;
   cin>>a>>b;
   int maxi =0;
   for(int i=0;i<b.length();i++){
       for(int j=1;j<=b.length()-i;j++){
           int s = a.find(b.substr(i,j));
           if(s>=0){
               maxi = max(maxi,j);
           }
       }
   }
   cout<<a.length()+b.length()-2*maxi<<endl;
}
 }
 return 0;
}