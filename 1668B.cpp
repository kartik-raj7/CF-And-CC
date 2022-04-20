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
       ll s = 0;
        vector<int>v(x);
        loop(i,0,x){
            cin>>v[i];
            s+=v[i];
        }
        sort(v.begin(),v.end());
        ll k = s + v[x-1]-v[0];
    if(k+x<=y){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;
}