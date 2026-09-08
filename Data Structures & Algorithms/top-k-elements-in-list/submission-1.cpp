class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<pair<int,int>>v;
        vector<int>ans;
        for(int i:nums){
            m[i]++;
        }
        for(auto t:m){
                v.push_back({t.second,t.first}); 
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());

        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
