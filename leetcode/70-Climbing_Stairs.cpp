class Solution {
public:
    static int dp[46];
    int climbStairs(int n) {
        // USING DP

        if(n==1){
            return 1;
        }
        if (n == 0){
            return 1;
        }

        if (dp[n] > 0)
            dp[n] = climbStairs(n-1) + climbStairs(n-2);
        return dp[n];




        // USING recursion:
//         if(n==1){
//             return 1;
//         }
//         if (n == 0){
//             return 1;
//         }

//         return climbStairs(n-1) + climbStairs(n-2);
    }
};
