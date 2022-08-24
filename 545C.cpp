#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#include <vector>
#include <numeric> 
#include <algorithm>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t;  while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    //  vector<vector<int,int>>v;
    int n;
    cin>>n;
    pair<int,int>p[n];
    ll counter = 0;
      for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       p[i] = {a,b};
      }
      if(n==1)counter++;
      else counter+=2;
      loop(i,1,n-1){
        if(p[i].first-p[i-1].first>p[i].second){
            counter++;
        }
        else if(p[i].second<p[i+1].first-p[i].first){
            counter++;
            p[i].first+=p[i].second;
        }
      }
      cout<<counter<<endl;
    }