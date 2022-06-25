/////memoization
// int solve(int index,vector<int> &nums,vector<int>&dp){
//     if(index==0) return nums[index];
//     if(index<0)return 0;
//     if(dp[index]!=-1) return dp[index];
//     int select = nums[index]+solve(index-2,nums,dp);
//     int notselect = 0+solve(index-1,nums,dp);
//     return dp[index] = max(select,notselect);
// }
/////tabulation/////////
// int solve(int index,vector<int> &nums,vector<int>&dp){
//     dp[0]=nums[0];
//     for(int i=1;i<index;i++){
//         int select = nums[i];
//         if(i>1)select +=dp[i-2];
//         int notselect = 0+dp[i-1];
//         dp[i]= max(select,notselect);
//     }
// return dp[index-1];
// }
//////////Space Optimization
int solve(int index,vector<int> &nums){
//     dp[0]=nums[0];
    int prev = nums[0];
    int prev2 = 0;
    for(int i=1;i<index;i++){
        int select = nums[i];
        if(i>1)select +=prev2;
        int notselect = 0+prev;
        int aux = max(select,notselect);
        prev2 = prev;
        prev = aux;
    }
return prev;
}
int maximumNonAdjacentSum(vector<int> &nums){
    vector<int> dp(nums.size(),-1);
    return solve(nums.size(),nums);
}