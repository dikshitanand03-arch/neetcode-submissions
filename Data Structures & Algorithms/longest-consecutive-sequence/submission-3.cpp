class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
           if (n == 0) {
            return 0;
        }
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
       
        int maxi=0;
        for(int i=0;i<n;i++){
            int k=nums[i];
            int count=1;
                 if(s.find(k-1)==s.end()){
                    while(s.find(k+1)!=s.end()){
                        k++;
                    count++;
                    }
                    
                 }
                 maxi=max(maxi,count);
            }
            return maxi;
    }
};
