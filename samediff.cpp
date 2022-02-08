#include <iostream>
#include <map>
#define ll long long
using namespace std;
void solve(){
    map<ll,ll> m;ll n;
    int c=0;cin>>n;
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        c += m[x-i]++;
    }
    cout<<c<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
} 
return 0;
}