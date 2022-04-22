#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
void solve(){
        ll n;
        cin>>n;
        string k;
        cin>>k;
        ll blue=0,red=0;
        loop(i,0,n){
            if(k[i]=='B')blue++;
            else if(k[i]=='R')red++;
            else{
                if(blue==0&&red==0)continue;
                else if(blue==0||red==0){
                    pn;return;
                    }
                else{ blue = 0,red=0;
                }
            }
        }
        if(blue==0&&red==0){}
    else if(blue==0||red==0){
                pn return;
            }
            else {
                blue=0;
                red=0;
            }
            py
}
int main(){
    ll t;
    cin>>t;
    while(t--){
       solve();       
    }
    return 0;
}