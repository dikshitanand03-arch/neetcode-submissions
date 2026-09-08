class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int e=s.size()-1;
        while(e>st){
            if(!isalnum(s[st])){
                st++;
            }
                else if(!isalnum(s[e])){
                e--;
            }

            else{
                if(tolower(s[st])!=tolower(s[e])){
                    return false;
                }
                 e--;
                 st++;
            }
           
           
        }
        return true;

    }
};
