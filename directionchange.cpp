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
    int t;
    //t=1;
    cin>>t;
    while(t--){
       int x,y;
       cin>>x>>y;
         if(y>x) swap(x,y);
    //    char k = '-1';
       ll c=x-y;
     if(y==1 && c>1) { 
         puts("-1");
         }
       else{
       if(c%2==0) c=2*c;
       else c=2*c-1;
       ll ans=2*(y-1)+c;
      cout<<ans<<endl;
       }
    }
    return 0;
}