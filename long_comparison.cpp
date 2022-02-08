#include <iostream>
#define ll long double
#include <math.h>
#include <algorithm>
using namespace std;
void solve(ll a,ll b,ll c,ll d){
    ll k,s,f;
    if(b>d){
         k = b-d;
         f=pow(10.0,k);
         a*=f;
    }
    else{
     k = d-b;
     s = pow(10.0,k);
     c*=s;
    }
    if(a<c){
        cout<<"<"<<"\n";
    }
    else if(a>c){
        cout<<">"<<"\n";
    }
    else cout<<"="<<"\n";
}
int main(){
ll a,b,c,d,t;
cin>>t;
while(t--){
     cin>>a>>b>>c>>d;
     solve(a,b,c,d);
    
}
}