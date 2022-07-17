#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        ll n;
        cin>>n;
        ll arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        bool flag = true;
        loop(i,0,n){
            if(arr[i]%arr[0]!=0)flag = false;
        }
        if(flag){py;}
        else pn;
    }
}