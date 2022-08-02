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
        vector<int> arr;
        loop(i,0,m){
            int x;
            cin>>x;
            arr.pb(x);
        }
        sort(arr.begin(),arr.end());
        vector<int> aux;
        for(int i=0;i<m-1;i++){
            aux.pb(arr[i+1]-arr[i]-1);
        }
        int last = arr[0]+n-arr[m-1]-1;
        aux.pb(last);
        sort(aux.begin(),aux.end(),greater<int>());
        // for(auto i:aux){
        //     cout<<i<<" ";
        // }
        int day = 0;int ans=0;
        for(int i=0;i<m;i++){
            int current = aux[i];
            current-=(day*2);
            if(current<=0)break;
            if(current>1){
            ans+=current-1;}
            if(current==1)ans++;
            day+=2;
        }
        cout<<n-ans<<endl;
        // int aux[m];

    }

}