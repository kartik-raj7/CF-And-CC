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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
map<string,string>mp;
 int n,m;
 cin>>n>>m;
 string str1,str2;
while(m--){
     cin>>str1>>str2;
    if(str1.length()>str2.length())  mp[str1]=str2;
       else mp[str1]=str1;
 }
 while(n--){
    cin>>str1;
    cout<<mp[str1]<<" ";
 }
 return 0;
}