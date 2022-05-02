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
  string a;
  string b;
  cin>>a>>b;
  if(count(b.begin(),b.end(),b[0])==b.length()&&b.length()!=1){
      cout<<1<<endl;
  }
  else if(a.length()==1&&b.length()==1){
      cout<<2<<endl;
  }
  else cout<<-1<<endl;
    }
        return 0;
        }