#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("errorgorn");
#define py puts("maomao90");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;string a="errorgorn";

    while(t--){
        ll n;
        cin>>n;int sum=0;
        vector<int>v(n);
        loop(i,0,n){
            cin>>v[i];
        }
        loop(i,0,n){
            sum+=v[i];
        }
        if((sum-n)%2==0){py;}
        else pn;
        }
return 0;}
