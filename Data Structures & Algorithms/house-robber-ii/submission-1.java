class Solution {

  int solve1(int[]nums,int[]dp1,int i){
    int n=nums.length;

    if(i>=n-1){
        return 0;
    }
    if(dp1[i]!=-1){
        return dp1[i];
    }
    int take=nums[i]+solve1(nums,dp1,i+2);
    int nottake=solve1(nums,dp1,i+1);
    return dp1[i]=Math.max(take,nottake);


        }

         int solve2(int[]nums,int[]dp2,int i){
            if(i<=0){
                return 0;
            }
            if(dp2[i]!=-1){
                return dp2[i];
            }
            int take=nums[i]+solve2(nums,dp2,i-2);
            int nottake=solve2(nums,dp2,i-1);
            return dp2[i]=Math.max(take,nottake);

        }


    public int rob(int[] nums) {

        int n=nums.length;
         if (n == 1) {
            return nums[0];
         }
        int []dp1=new int[n];
        int []dp2=new int[n];
        for(int i=0;i<n;i++){
            dp1[i]=-1;
            dp2[i]=-1;
        }

        int a=solve1(nums,dp1,0);
        int b=solve2(nums,dp2,n-1);
        return Math.max(a,b);
      
    }
}
