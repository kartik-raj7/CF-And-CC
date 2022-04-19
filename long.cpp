#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%2==0&&a+2<=b){
            cout<<a<<" "<<a+2<<endl;
        }
        else if(a+3<=b){
            if(a%3==0){
                cout<<a<<" "<<a+3<<endl;
            }
            else cout<<a+1<<" "<<a+3<<endl;
        }
        else cout<<-1<<endl;
    }
}