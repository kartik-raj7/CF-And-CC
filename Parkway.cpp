#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#define pb push_back
#include <queue>
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
 test{
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    ll arr[n];
    loop(i,0,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<m){
        cout<<0<<endl;
    }
    else cout<<sum-m<<endl;
 }
}