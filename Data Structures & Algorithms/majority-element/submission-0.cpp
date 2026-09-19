class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int , int> mp;

        for(int i=0 ; i<n ; i++){
            mp[nums[i]]++;
        }

        int maxi = INT_MIN;
        int ans;

        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans ;
    }
};