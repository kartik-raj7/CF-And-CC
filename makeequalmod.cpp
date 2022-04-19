#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
// void solve(){
// ll n;
//         cin>>n;
//         if(n==1){
//             cout<<"NO"<<endl;return;
//         }
//         map<ll,ll>m;
//         vector<ll> arr(n);
//         loop(i,0,n){
//             cin>>arr[i];
//             m[arr[i]]++;}
// if(m[1]==0){
//         cout<<"YES"<<endl;
//     }
//     else if(m[1]&&m[0]){
//         cout<<"NO"<<endl;
//     }
//     else if(m[1]==n){
//        cout<<"YES"<<endl;
//     }
//     else if(m[1]&&m[2]){
//         cout<<"NO"<<endl;
//     }else{
//         for(int i=0;i<n;i++){
//             if(m[arr[i]-1]==0)continue;
//             else{
//                 cout<<"NO"<<endl;return;
//             }
//         }
//         cout<<"NO"<<endl;
//     }
// }
int main(){
    ll t;
    cin>>t;bool flag = true;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll>m;
        vector<ll> arr(n);
        loop(i,0,n){
            cin>>arr[i];
            m[arr[i]]++;}
            sort(arr.begin(),arr.end());
            bool flag = true;
            if(m.find(1)!=m.end()){
                loop(i,1,n){
                    if(arr[i]-arr[i-1]==1){
                        flag = false;
                    }
                }
            }
           if(flag) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
    }
}
    
    