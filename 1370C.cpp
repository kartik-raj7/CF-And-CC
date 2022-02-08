#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
bool prime(ll x){
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n==1){
        cout<<"FastestFinger";
    }
    else if(n%2==0&&n>2){
       if((n&(n-1))==0 || prime(n/2))
        cout<<"FastestFinger";
            else cout<<"Ashishgup";
    }
        else cout<<"Ashishgup";
        cout<<endl;
}
return 0;}