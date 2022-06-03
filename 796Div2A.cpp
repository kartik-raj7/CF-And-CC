#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    ll n;
    cin>>n;
    ll arr[n];
    int odd=0,even=0;
    int c=0;
    loop(i,0,n){
        cin>>arr[i];
        if(arr[i]%2!=0)odd++;
    }
    if(c==n){
        cout<<0<<endl;
    }
    else if(odd>even){
        cout<<odd-even<<endl;
    }
    else if(odd==even){
        cout<<odd<<endl;
    }
    else if(even==n){
        ll sum=0;
        loop(i,0,n){
            sum +=arr[i];
        }
        while(sum%2==0){
            sum/=2;c++;
        }
        c+=n/2;
        cout<<c<<endl;
    }
    else{
        ll sum=0;
         loop(i,0,n){
            sum +=arr[i];
        }
        while(sum%2==0){
            sum/=2;c++;
        }
        cout<<c+(even-odd)<<endl;
        // ll o[n],e[n];
        // int f=0,r=0;
        // loop(i,0,n){
        //     if(arr[i]%2==0){
        //         e[f++]=arr[i];
        //     }
        }
    }

    }