#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
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
test{
int n;
cin>>n;
ll v[n];int c=0;
loop(i,0,n){
    cin>>v[i];
}
for(int i=n-2;i>=0;i--){
    if(v[i+1]<=v[i]){
        while(v[i+1]<=v[i] && v[i]>0)
           { v[i]=v[i]/2;c++;}
        if(v[i]>=v[i+1]){
            c=-1;break;
        }
        }
    }
    cout<<c<<endl;
}
return 0;
    }