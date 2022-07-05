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
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    vector<vector<int>>matrix={{1,0,0,1},{0,1,1,0},{0,1,1,0},{1,0,0,1}};
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //alternate
            cout<<matrix[i%4][j%4]<<" ";
            // if((i%4==j%4)||(i%4)+(j%4)==3){
            //     cout<<0<<" ";
            // }
            // else cout<<1<<" ";
        }
        cout<<endl;
    }
   }
}