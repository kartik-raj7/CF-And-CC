#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    test{
    int mod = 32768;
    int n;
    cin>>n;
    vector <int>v(n);
    loop(i,0,n){
        cin>>v[i];
        if(v[i]==0){
            cout<<0<<" ";
            continue;
        }
        int d[16] , ans=INT_MAX;
        loop(j,0,15){
            int x=v[i]+j;
            int c=0;
            while(x%2==0)
            c++;x=x/2;;
            d[i]=j+15-c;
            ans=min(ans,d[i]);
        }
        cout<<ans<<" ";
    }
    cout<<endl;

    }
return 0;
}