class Solution {
public:
    static bool comp(pair<int,int>& a, pair<int,int>& b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        int n = nums.size();

        for(int i=0 ; i<n ; i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> arr(mp.begin(), mp.end());

        sort(arr.begin(), arr.end(), comp);

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
        
    }
};
