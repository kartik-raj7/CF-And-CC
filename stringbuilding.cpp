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
        string k;
        cin>>k;
        k.push_back('l');
       ll c=1;
       char chars=k[0];
       bool flag=true;
      for(int i=1;i<k.length();i++){
           if(k[i]==chars)c++;
           else{
               if(c==1){
               flag=false;
               break;
           }
           else{
               chars = k[i];
               c=1;

           }
       }
    }
    if(flag){py;}
    else pn;}
    return 0;
}