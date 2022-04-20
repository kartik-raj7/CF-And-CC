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
       double n,x;
       cin>>n>>x;
       double sum = 0;
       vector<int> l(n);
    loop(i,0,n){
      cin>>l[i];
    }
    if(n==1){
      cout<<ceil(x/l[0])<<endl;
    }
    else{
    sort(l.begin(),l.end());
    ll k = ceil(x/l[0]);
    if(k>n){
        cout<<k<<endl;;
    }
    else cout<<n<<endl;}}
return 0;}
