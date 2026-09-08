class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        for(string c:strs){
            string ch=c;
            sort(c.begin(),c.end());
        
                m[c].push_back(ch);
            
        }
        for(auto t:m){
            ans.push_back(t.second);
        }
        return ans;
    }
};
