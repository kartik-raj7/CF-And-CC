#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <unordered_map>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int>mp;
        loop(i,0,n){
            cin>>arr[i];
            mp[arr[i]]=i+1;
        }
        ll ind=0,ans=INT_MIN;
        for(ll i = n-1;i>=1;i--){
            if(arr[i-1]>arr[i]){
                ind=i;break;
            }
        }
        for(int i=0;i<ind;i++){
           ll aux = mp[arr[i]];
           ans = max(aux,ans);
        }
        set<int>s;
        for(int i=0;i<ans;i++){
            s.insert(arr[i]);
        }
        cout<<s.size()<<endl;
    }
        // if(n==1){
        //     cout<<0<<endl;
        // }
        // else if(mp[arr[n-1]]>=2&&mp.size()>1){
        //   cout<<mp.size()<<endl;
        // }
        // else{
        //     int index=0;
        //    for(int i=n-1;i>0;i--){
        //     if(arr[i]>arr[i-1]&&mp[arr[i-1]]==1){
        //         index=i-1;
        //     }
        //     else break;
        //    }
        //    if(index>0){
        //       cout<<mp.size()-(n-index)<<endl;
        //    }
        //    else cout<<mp.size()-1<<endl;
        // //    
        // }
        }
    