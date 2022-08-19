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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
// ll aux[200005];
// ll ans[200005];
// ll arr[200005];
int main(){
    test{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll solve = a*d;
    ll solve2 = b*c;
    if(solve==solve2){
        cout<<0<<endl;
    } 
    else if(solve2==0||solve==0){
        cout<<1<<endl;
    }
    else if(solve2%solve==0||solve%solve2==0){
        cout<<1<<endl;
    }
    // else if(solve2!=0&&solve%solve2==0||solve!=0&&solve2%solve==0){
    //     cout<<1<<endl;
    // }
    else{
        cout<<2<<endl;
    }
    }
    // ll div1 = a/b;
    // ll div2 = c/d;
    // if(div1==div2){
    //     cout<<0<<endl;
    // }
    // else if(div1%div2==0||div2%div1==0){
    //     cout<<1<<endl;
    // }
    // else cout<<2<<endl;
    // if(a/b==c/d){
    //     cout<<0<<endl;
    // }
    //  else if(b==c){
    //     if(((a/b)%(c/d)==0)||(((c/d)%(a/b)==0))){
    //         cout<<1<<endl;
    //     }
    //     else cout<<2<<endl;
    // }
   
    // else cout<<1<<endl;
    // }
}