class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*for(int i=0 ; i<nums.size()-1 ; i++){
            int n = nums[i];
            int count = 1;
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[j]==n){
                    count++;
                }
            }
            if(count >= 2) return true;
        }*/
        unordered_map<int,int> mp;
        for(int n : nums){
            mp[n]++;
        }
        for(auto it : mp){
            if(it.second >= 2) return true;
        }
        return false;
    }
};