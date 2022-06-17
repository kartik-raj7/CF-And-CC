#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#define pb push_back
#include <queue>
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
///////Memoization Method
int solve(int index,vector<int>&heights,vector<int>&dp){
    if(index==0)return 0;
    if(dp[index]!=-1)return dp[index];
    int left = solve(index-1,heights,dp)+abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(index>1)right = solve(index-2,heights,dp)+abs(heights[index]-heights[index-2]);
    return dp[index]=min(left,right);
}
///////Tabulation Method
int solve(int index,vector<int>&heights,vector<int>&dp){
    dp[0]=0;
    for(int i=1;i<n;i++){
    int left = dp[i-1]+abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(i>1) right = dp[i-2]+abs(heights[index]-heights[index-2]);
    dp[i]=min(left,right);
    return dp[n-1];
}
//////Space Optimization method
int solve(int index,vector<int>&heights,vector<int>&dp){
    prev =0;
    prev2 = 0;
    int curr;
    for(int i=1;i<n;i++){
    int left = prev+abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(i>1) right = prev+abs(heights[index]-heights[index-2]);
    curr=min(left,right);
    prev2=prev;
    prev = curr;}
    return prev;
}
int main(){
    vector<int> dp;
    int index,heights[index];
    cin>>index;
    loop(i,0,index){
        cin>>heights[i];
    }
    solve(index,heights,dp);
}