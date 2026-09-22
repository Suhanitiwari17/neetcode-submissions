class Solution {
public:
    bool isPalindrome(string s){

        string ans = "";

        for(char ch : s) {
            if(isalnum(ch)) {
                ans += tolower(ch);
            }
        }

        int n = ans.length();

        string temp;

        for(int i=n-1 ; i>=0 ; i--){
            temp += ans[i];
        }

        return temp == ans;

    }
};
