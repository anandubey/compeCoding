/*
 * @lc app=leetcode id=33 lang=c
 *
 * [33] Search in Rotated Sorted Array
 *
 * https://leetcode.com/problems/search-in-rotated-sorted-array/description/
 *
 * algorithms
 * Medium (37.53%)
 * Likes:    12984
 * Dislikes: 848
 * Total Accepted:    1.4M
 * Total Submissions: 3.7M
 * Testcase Example:  '[4,5,6,7,0,1,2]\n0'
 *
 * There is an integer array nums sorted in ascending order (with distinct
 * values).
 * 
 * Prior to being passed to your function, nums is possibly rotated at an
 * unknown pivot index k (1 <= k < nums.length) such that the resulting array
 * is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]
 * (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3
 * and become [4,5,6,7,0,1,2].
 * 
 * Given the array nums after the possible rotation and an integer target,
 * return the index of target if it is in nums, or -1 if it is not in nums.
 * 
 * You must write an algorithm with O(log n) runtime complexity.
 * 
 * 
 * Example 1:
 * Input: nums = [4,5,6,7,0,1,2], target = 0
 * Output: 4
 * Example 2:
 * Input: nums = [4,5,6,7,0,1,2], target = 3
 * Output: -1
 * Example 3:
 * Input: nums = [1], target = 0
 * Output: -1
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= nums.length <= 5000
 * -10^4 <= nums[i] <= 10^4
 * All values of nums are unique.
 * nums is an ascending array that is possibly rotated.
 * -10^4 <= target <= 10^4
 * 
 * 
 */

// @lc code=start


int search(int* nums, int numsSize, int target){
    int left = 0, right = numsSize - 1;
    int mid;
    while (left <= right){
        mid = left + (right-left)/2;
        if (nums[mid] == target){
            return mid;
        }
        else if(nums[left] == target){
            return left;
        }
        else if (nums[right] == target){
            return right;
        }
        // small   small   big -   left
        else if (target < nums[left] && target < nums[mid] && target > nums[right]){
            right = mid - 1;
        }

        // small   big     small - right
        else if (target < nums[left] && target > nums[mid] && target < nums[right]){
            left = mid + 1;
        }

        // big    small   small   -left
        else if (target > nums[left] && target < nums[mid] && target < nums[right]){
            right = mid - 1;
        }

        // small   big     big - right
        else if (target < nums[left] && target > nums[mid] && target > nums[right]){
            left = mid + 1;
        }

        // big     small   big - left
        else if (target > nums[left] && target < nums[mid] && target > nums[right]){
            right = mid - 1;
        }

        // big     big     small - right
        else if (target > nums[left] && target > nums[mid] && target < nums[right]){
            left = mid + 1;
        }

        // small     small     small - right
        else if (target < nums[left] && target < nums[mid] && target < nums[right]){
            if (abs(nums[left] - nums[mid]) > abs(nums[right]-nums[mid])){
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }

        // big     big     big - left
        else if (target > nums[left] && target > nums[mid] && target > nums[right]){
            if (abs(nums[left] - nums[mid]) > abs(nums[right]-nums[mid])){
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }
        else{
            return -1;
        }
    }
    return -1;
}
// @lc code=end

