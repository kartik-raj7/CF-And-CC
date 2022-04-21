#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
 
int main() {
    ll t;
    cin>>t;
    while(t--){
     int n;bool flag =true;
     cin>>n;int even=0,odd=0;
     vector<ll>v(n);
     vector <ll>o;
     vector <ll> e;
     loop(i,0,n){
         cin>>v[i];
         if(i%2==0){
             o.push_back(v[i]);
         }
         else e.push_back(v[i]);
     }
 for(int i=1;i<o.size();i++){
        if(o[i]%2!=o[i-1]%2){
             flag=false;
            break;}}
for(int i=1;i<e.size();i++){
        if(e[i]%2!=e[i-1]%2){
             flag=false;
            break;}}
if(flag){
        puts("YES");
    }
    else puts("NO");
    }

    // for(int i=0;i<n;i+=2){
    //     if(v[i]%2==0){
    //         even++;
    //     }
    //     else odd++;
    // }
    // if(odd>0&&even>0){
    //     flag=false;
    // }
    // for(int i=1;i<n-2;i+=2){
    //     if(v[i]%2!=0){
    //         odd++;
    //     }
    //     else even++;
    // }
    // if(odd>0&&even>0){
    //     flag=false;
    // }
    // if(flag){
    //     puts("YES");
    // }
    // else puts("NO");
return 0;
}
