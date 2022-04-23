#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int o =0,e=0;
        loop(i,0,n){
            int p;
            cin>>p;
            if(p==-1){
                o++;
            }
            else e++;
        }
        if(abs(o-e)<2){
            py;
        }
        else if(abs(o-e)==2){
           if(o%2){pn;}
           else py;
        }
        else pn;
        }
return 0;}
