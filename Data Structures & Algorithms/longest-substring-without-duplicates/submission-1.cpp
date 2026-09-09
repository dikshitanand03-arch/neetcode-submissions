class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>se;
        int st=0;
        int len=0;
        for(int e=0;e<s.size();e++){
        
            if(se.find(s[e])!=se.end()){
                while(se.find(s[e])!=se.end()){
                    se.erase(s[st]);
                    st++;

                }
                  
            }
              se.insert(s[e]);  
                      len=max(len,e-st+1);

        }
        return len;
    }
};
