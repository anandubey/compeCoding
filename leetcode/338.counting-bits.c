/*
 * @lc app=leetcode id=338 lang=c
 *
 * [338] Counting Bits
 *
 * https://leetcode.com/problems/counting-bits/description/
 *
 * algorithms
 * Easy (73.99%)
 * Likes:    6543
 * Dislikes: 308
 * Total Accepted:    541.6K
 * Total Submissions: 732K
 * Testcase Example:  '2'
 *
 * Given an integer n, return an array ans of length n + 1 such that for each i
 * (0 <= i <= n), ans[i] is the number of 1's in the binary representation of
 * i.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 2
 * Output: [0,1,1]
 * Explanation:
 * 0 --> 0
 * 1 --> 1
 * 2 --> 10
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 5
 * Output: [0,1,1,2,1,2]
 * Explanation:
 * 0 --> 0
 * 1 --> 1
 * 2 --> 10
 * 3 --> 11
 * 4 --> 100
 * 5 --> 101
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= n <= 10^5
 * 
 * 
 * 
 * Follow up:
 * 
 * 
 * It is very easy to come up with a solution with a runtime of O(n log n). Can
 * you do it in linear time O(n) and possibly in a single pass?
 * Can you do it without using any built-in function (i.e., like
 * __builtin_popcount in C++)?
 * 
 * 
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    int power_of_two = 2;

    int *res = (int *) malloc((n+1) * sizeof(int));
    *res = 0;
    *(res+1) = 1;

    for (int i=2; i <= n; i++){
        if (!(i & (i - 1))) {
            power_of_two = i;
        }
        *(res + i) = *(res + i - power_of_two) + 1;
    }
    return res;
}
// @lc code=end

