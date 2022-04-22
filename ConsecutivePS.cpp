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
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;bool flag = true;
       vector<ll> v(n);
       loop(i,0,n){
           cin>>v[i];
       }
    //    ll f = v[0]-1;

    //    for(int i=f;i<=f+2;i++){
    //        ll d = i;
    //        bool l = true;

    //        for(int j=1;j<n;j++){
    //            if(abs(v[j]-d)>2){l=false;break;
    //            }d++;
    //        }
           
    //    if(l==true){
    //        flag=true;
    //        break;
    //    }
    //    }

       if(n==1){
           flag=true;
       }
       else {
           loop(i,0,n-1){
               if(v[i+1]-v[i]>3){
                   flag=false;
                   break;
               }
               else continue;
           }
       }
     if(flag){py;}
     else pn;
    }
}