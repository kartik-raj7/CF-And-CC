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
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    ll n,s;
    cin>>n>>s;
    ll k = n*n;
    if(s==0){
        cout<<0<<endl;
    }
    // else if(s%k==0){
    //     cout<<s/k<<endl;
    // }
    else cout<<s/k<<endl;
   }
}
