#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
   string c;
   cin>>c;
   bool flag = true;
   set<int> st;
   int n = c.length();
   ll i=0;
   for(i=0;i<n;i++){
       if(st.find(c[i])==st.end())
       st.insert(c[i]);
       else break;
   }
   for(int j=i;j<n;j++){
       if(c[j]!=c[j-i])
        flag = false;
   }
   if(flag){
       py;
   }
   else pn;
    }
return 0;
}