#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
{ test{
    int n,c=0;
    cin>>n;
    loop(i,0,n){
        cin>>v[i];
        if(v[i]<0){
            c++;
            v[i]=abs(v[i]);
        }
    }
    loop(i,0,c){
        v[i]=-v[i];
    }
    bool flag= true;
    loop(i,0,n-1){
        if(v[i]>v[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){py;}
    else pn;
}
 }
}