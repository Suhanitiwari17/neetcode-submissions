class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;

        for(int i=m ; i<nums1.size() ; i++){
           nums1[i] = nums2[i-m];
        }

        for(int i=0 ; i< nums1.size() - 1 ; i++){
            int mini = i;
            for(int j=i+1 ; j<nums1.size() ; j++){
                if(nums1[j] < nums1[mini]){
                    mini = j;
                }
            }
            swap(nums1[i] , nums1[mini]);
        }
    }
};