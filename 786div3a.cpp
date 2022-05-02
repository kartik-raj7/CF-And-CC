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
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
   int x,y;
   cin>>x>>y;
   if(x>y)cout<<0<<" "<<0<<endl;
   else if(y%x!=0)cout<<0<<" "<<0<<endl;
   else cout<<1<<" "<<y/x<<endl;
    }
        return 0;
        }