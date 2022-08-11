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
#include <unordered_map>
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
        int n,m;
        cin>>n>>m;
        int arr[n];
        // unordered_map<int,int>mp;
        loop(i,0,n){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int c=0;
        int aux=1;
        loop(i,0,n){
            if(arr[i]*aux>=m){
                c++;
                aux=0;
            }
            aux++;
        }
        cout<<c<<endl;
    }
}
    //     loop(i,0,n){
    //         mp[arr[i]]=arr[i]*(n-i);
    //     }
    //   for(int i=0;i<n;i++){
    //     // if(mp[arr[i]]>=m){
    //     //     c++;
    //     // }
    //     cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
    //   }
    //   }
    // //  cout<<c/2<<endl;
    // }
