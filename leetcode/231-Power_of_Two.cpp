class Solution {
public:
    bool isPowerOfTwo(int n) {

        /*
        // Trivial method
        bool is_power_of_two = false;
        if (n < 0)
        {
            return false;
        }
        int count=0;
        while (n)
        {
            count += n&1;
            n >>= 1;
        }
        if (count == 1)
        {
            is_power_of_two = true;
        }
        return is_power_of_two;
        */

        // Sexy Method
        return ( (n<=0)? false : !(n&(n-1)) );
    }
};
