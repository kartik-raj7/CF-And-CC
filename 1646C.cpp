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
// ll fac(ll n){
//     if(n==0)return 1;
//     return n*fac(n-1);
// }
int solve(vector<ll>ans,ll n,int i){
    if(i>14){
        int count=0;
        for(int j=0;j<=40;j++){
            if((n>>j)&1)count++;
        }
        return count;
    }
    if(n-ans[i]<0)return solve(ans,n,i+1);
        int take = 1+solve(ans,n-ans[i],i+1);
        int ntk = solve(ans,n,i+1);
    return min(take,ntk);
}
int main(){
    test{
        ll n;
        cin>>n;
        vector<ll>ans;
        if(ceil(log2(n))==floor(log2(n)))cout<<1<<endl;
        
        // for(int i=2;i<=35;i++){
        //     ans.push_back(pow(2,i));
        // }
        else{
        int aux = 1;
        for(ll i=1;i<15;i++){
            aux=aux*i;
            ans.push_back(aux);
        }
        // sort(ans.begin(),ans.end());
        int sol = solve(ans,n,0);
        cout<<sol<<endl;
        }

    }
}