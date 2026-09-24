class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;

        int ans = 0;

        while(left < right){
            int width = right - left;
            int height = min(heights[left],heights[right]);

            int water = width * height;

            ans = max(ans,water);

            heights[left] < heights[right] ? left++ : right--;
        }

    return ans;
    }
};
