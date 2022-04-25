#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
        int n,m; int c=0;
        cin>>n;
        vector <ll> v(n);
        loop(i,0,n){
            cin>>v[i];
        }
        cin>>m;
        vector <ll> k(m);
        loop(i,0,m){
            cin>>k[i];
        }
       
        sort(v.begin(),v.end());
        sort(k.begin(),k.end());
           loop(i,0,n){loop(j,0,m){
               if(abs(v[i]-k[j])<=1){c++;k[j]=10000;break;}
           }}
           cout<<c<<endl;
        return 0;}