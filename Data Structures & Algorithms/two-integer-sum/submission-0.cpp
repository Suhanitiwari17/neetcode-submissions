class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0 ; i<nums.size() ; i++){
            int numb = target - nums[i] ;

            if(mp.find(numb) != mp.end()){
                return {mp[numb],i};
            }
            mp[nums[i]]=i;
        }

        return {};

    }
};
