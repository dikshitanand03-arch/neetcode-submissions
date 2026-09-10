class Solution {
int solve(int[]nums,int[]dp,int i){
    int n=nums.length;
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }

    int take=nums[i]+solve(nums,dp,i+2);
    int nottake=solve(nums,dp,i+1);

   return dp[i]=Math.max(take,nottake);

}


    public int rob(int[] nums) {
        int n=nums.length;
        int[]dp=new int[n];
        for(int i=0;i<n;i++){
            dp[i]=-1;
        }
        return solve(nums,dp,0);
    }
}
