class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int s=0;
        int e=n-1;
        int len=0;
        int area =0;
        int ans=INT_MIN;
        while(e>s){
            len=min(heights[s],heights[e]);
           int breath=e-s;
            area=len*breath;
            ans=max(area,ans);
            if(heights[e]>heights[s]){
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};
