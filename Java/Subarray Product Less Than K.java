class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if(k <= 1) return 0;

        int left = 0, right = 0, prod = 1, count = 0;

        while (right < nums.length){
            prod *= nums[right];

            while(prod >= k && left <= right){
                prod /= nums[left];
                left += 1; 
            }
            count += right - left + 1;
            right += 1;
        }
        
        return count;
    }
}