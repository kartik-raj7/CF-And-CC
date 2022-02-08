#include <iostream>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
ll n,k;
while(t--){
    cin>>n>>k;
    ll a=1,b=1;
    ll ans=0;
    while(a<n&&b<k){
        ans++;
        a+=b;
        b+=b;
    }
    if(a<n){
        ll p=n-a;
        ans+=(p+k-1)/k;
    }
    cout<<ans<<endl;
}
}