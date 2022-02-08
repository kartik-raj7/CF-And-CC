#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
ll n;
while(t--){
cin>>n;
vector<ll> v;ll k;bool flag=false;
for(int i=0;i<n;i++){
    cin>>k;
    v.pb(k);
}
if(n%2==0){
    cout<<"YES"<<"\n";
}
else {
    for(int i=0;i<n-1;i++){
        if(v[i+1]<=v[i]){flag=true;break;}
    }
    if(flag==true){
        cout<<"YES"<<"\n";
         }
    else cout<<"NO"<<"\n";
}
}
return 0;}