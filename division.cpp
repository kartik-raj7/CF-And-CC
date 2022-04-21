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
     int n;
     cin>>n;
     if(n>=1900){
         puts("Division 1");
     }
     else if(n>=1600&&n<=1899){
         puts("Division 2");
     }
     else if(n>=1400&&n<=1599){
         puts("Division 3");
     }
     else puts("Division 4");
}
return 0;
}
