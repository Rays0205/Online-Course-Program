#
# @lc app=leetcode id=1 lang=python
#
# [1] Two Sum
#
# https://leetcode.com/problems/two-sum/description/
#
# algorithms
# Easy (50.82%)
# Likes:    52194
# Dislikes: 1712
# Total Accepted:    11.1M
# Total Submissions: 21.7M
# Testcase Example:  '[2,7,11,15]\n9'
# Question
#/ Given an array of integers nums and an integer target, return indices of the
#/ two numbers such that they add up to target.
# 
#/ You may assume that each input would have exactly one solution, and you may
#/ not use the same element twice.
# 
#/ You can return the answer in any order.
# 
# 
#? Example 1:
#  
#? Input: nums = [2,7,11,15], target = 9
#? Output: [0,1]
#* Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
# 
# 
#? Example 2:
# 
#? Input: nums = [3,2,4], target = 6
#? Output: [1,2]
# 
#? Example 3:
# 
#? Input: nums = [3,3], target = 6
#? Output: [0,1] 
# 
#> Constraints: 
#> 2 <= nums.length <= 10^4
#> -10^9 <= nums[i] <= 10^9
#> -10^9 <= target <= 10^9
#! Only one valid answer exists.
# 
# 
# 
# Follow-up: Can you come up with an algorithm that is less than O(n^2) time
# complexity?
# Solution
'''
#- 解題思路: 用巢狀for迴圈(nested for loop)
#/ 時間複雜度: O(^2)
'''
# @lc code=start
class Solution(object):
    def twoSum(self, nums, target):
        n= len(nums)
        for i in range (n):
            for j in range (i+1,n):
                if nums[i]+nums[j]== target:
                    return [i,j]
        return[]



# @lc code=end

