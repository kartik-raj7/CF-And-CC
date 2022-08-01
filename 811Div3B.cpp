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
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        //         // set<int> s;
//         // int arr[n];
//         // int ans = INT_MAX;
//         // int calc = 1;
//         // loop(i,0,n){
//         //     cin>>arr[i];
//         //     // s.insert(arr[i]);
//         // }
//         // for(int i=1;i<n;i++){
//         //     s.insert()
//         // }
//         // cout<<n-s.size()<<endl;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int aux = -1;
        for(int i=n-1;i>=0;i--){
            if(mp.count(arr[i])==0){
                mp[arr[i]]=1;
            }
            else{
                aux=i;
                break;
            }
        }
        cout<<aux+1<<endl;
    }
}
//     }}
//         // set<int> s;
//         // int arr[n];
//         // int ans = INT_MAX;
//         // int calc = 1;
//         // loop(i,0,n){
//         //     cin>>arr[i];
//         //     // s.insert(arr[i]);
//         // }
//         // for(int i=1;i<n;i++){
//         //     s.insert()
//         // }
//         // cout<<n-s.size()<<endl;

//     }
// }