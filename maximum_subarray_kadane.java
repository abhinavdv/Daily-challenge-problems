//https://leetcode.com/problems/maximum-subarray/
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
 

// Constraints:

// 1 <= nums.length <= 3 * 104
// -105 <= nums[i] <= 105
 



class Solution {
    public int maxSubArray(int[] nums) {
        int sum_till_now = 0;
        int total_max_sum = Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            sum_till_now+=nums[i];
            total_max_sum = Math.max(total_max_sum, sum_till_now);
            if(sum_till_now<0)
                sum_till_now = 0;

        }
        return total_max_sum;
    }
}