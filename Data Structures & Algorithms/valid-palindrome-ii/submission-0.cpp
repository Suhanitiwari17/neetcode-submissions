class Solution {
public:
    bool validPalindrome(string s) {
        for(int i=0 ; i<s.length() ; i++){
            string ans;

            for(int j=0 ; j<s.length() ; j++){
                if(j==i) continue;
                else ans += s[j];
            }

            int n = ans.length();

            string temp;
            
            for(int k=n-1 ; k>=0 ; k--){
                temp += ans[k];
            }

            if( temp == ans ) return true;
        }
        return false;
    }
};