#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
ll n ,b , x,y;
cin>>n>>b>>x>>y;
ll p=0,r=0;
for(ll i=1;i<=n;i++){
    if(r+x>b){
        r-=y;
    }
    else r+=x;
    p+=r;
}
cout<<p<<endl;
}
}