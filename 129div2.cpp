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
map<string,string>mp;
test{
ll n;ll s=0,p=0;ll f=0;
cin>>n;
// if(n%4>=3&&n%6<=3){
//   cout<<-1<<endl;
// }
ll k=n%6;
p = n/6;
bool flag=true;
if(n<4){
    cout<<-1<<endl;
    continue;
}
if(k==2||k==4){
        p++;
    }
    else if(k!=0){
        flag=false;
    }
    k=n%4;
    s=n/4;
    if(flag){
        cout<<p<<" "<<s<<endl;
    }
    else cout<<-1<<endl;
     // if(k==2||k==4){

    // }
    // if(s==0||p==0){
    //     ll k = (s>p)?s:p;
    //     cout<<k<<" "<<k<<endl;
    // }
    // else if(n%6>=4){
    //     f = (n%6)/4;
    //     cout<<p+f<<" "<<s<<endl;
    // }
    // else   cout<<p<<" "<<s<<endl;
}
}


