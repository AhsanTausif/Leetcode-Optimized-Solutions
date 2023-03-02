class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int n = jewels.size();
       int m = stones.size();
       map<char, int> mp;
       for(int i=0; i < n; i++){
            mp[jewels[i]] = 1;
       } 
       int total = 0;
       for(int j=0; j < m; j++){
           total += mp[stones[j]];
       }
       return total; 
    }
};