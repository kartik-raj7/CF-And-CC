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
   int n;
   cin>>n;
   vector<ll>v;
   ll table[40005];
   for(ll i = 1; i < 40005; i++)  {
        string s = to_string(i);
        string abc = s;
        reverse(abc.begin(),abc.end());
        if(abc == s)    {
            v.push_back(i);
        }
        
    }
    table[0] = 1;
    for(long long i = 0; i < v.size(); i++)   {
        for(long long j = v[i]; j <= 40004; j++)   {
            table[j] += table[j - v[i]];
            table[j] %= MOD;
        }
    }

cout<<table[n]<<endl;
    }
return 0;}