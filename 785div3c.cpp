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
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
test{
string k;
cin>>k;
int c=k.length();
int one = count(k.begin(),k.end(),"1");
int zero = count(k.begin(),k.end(),"0");
int qsn = count(k.begin(),k.end(),"?");
cout<<one<<" "<<zero<<" "<<qsn<<endl;}}
