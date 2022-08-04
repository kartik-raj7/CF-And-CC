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
    int solve(int i,int j,)
    test{
        int col;
        cin>>col;
        vector<vector<int>>dp(2,vector<int>(col,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<col;j++){
                cin>>dp[i][j];
            }
        }
        int k = dp[0][1];
        int c=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<col;j++){
                if(dp[i][j]==k){
                    if(i!=0&&j!=1){
                        c++;
                    }
                }
            }
        }
        if(c==(2*col)-1){
            cout<<k+(2*col)-2<<endl;
        }
        bool vis[2][col];
    }
}