class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;
        for(auto &n : set){
            if(!set.count(n - 1)){
                int length = 1;
                while(set.count(n + length)){
                    length += 1;
                }
                longest = max(longest, length);
                     
            }
        }
        return longest;
    }
};