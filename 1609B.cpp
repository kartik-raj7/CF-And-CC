#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#define pb push_back
#define ll long long
//#define pb push_back
using namespace std;
int main(){
ll k;
cin>>k;
ll t;
cin>>t;
vector<char>v;
char c;
for(ll i=0;i<k;i++){
    cin>>c;
    v.pb(c);
}
while(t--){
    ll q;char p;
    cin>>q>>p;
    v[q-1]=p;ll counter=0;
    for(ll i=0;i<k-2;i++){
    if(v[i]=='a'&&v[i+1]=='b'&&v[i+2]=='c'){
    counter++;}
    }
cout<<counter<<endl;
}
}