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
#include <vector>
#include <numeric> 
#include <algorithm>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t;  while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll k;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0&&(__gcd(i,n/i)==1)){
            k = i;
        }
    }
    cout<<k<<" "<<n/k<<endl;
    // if(!(n&n-1)){
    //    cout<<1<<" "<<n<<endl;
    // }
    // else{
    //     double  k =n;
    //     if(ceil(k/3)==floor(k/3)){
    //         cout<<3<<" "<<n/3<<endl;
    //     }
    //     else if(ceil(k/2)==floor(k/2)){
    //         cout<<2<<" "<<n/2<<endl;
    //     }
    //     else{
    //         cout<<1<<" "<<n<<endl;
    //     }
    // }
}