#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;int sum=0;
        int arr[n];ll max=0;
        loop(i,0,n){
            cin>>arr[i];
            }
        sort(arr,arr+n);
        cout<<arr[n-1]+arr[n-2]<<endl;
    }
    
}