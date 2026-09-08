class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffix(n);
         vector<int>preffix(n);
        vector<int>ans(n);
        suffix[0]=1;
        int mul1=1;
        int mul2=1;
        for(int i=1;i<n;i++){
           mul1=mul1*nums[i-1];
           suffix[i]=mul1;
        }
        preffix[n-1]=1;
        for(int i=n-2;i>=0;i--){
            mul2=mul2*nums[i+1];
            preffix[i]=mul2;
        }
        for(int i=0;i<n;i++){
            ans[i]=suffix[i]*preffix[i];
        }

    return ans;
    }
};
