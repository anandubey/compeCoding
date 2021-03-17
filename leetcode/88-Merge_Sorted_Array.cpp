class Solution {
public:
    void linear_sort(vector<int>& nums)
    {
        if (nums.size() == 1)   return;
        int temp=0;
        for (int i=1; i<nums.size() && nums[i-1] > nums[i]; i++){
            temp = nums[i];
            nums[i] = nums[i-1];
            nums[i-1] = temp;


        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0)
            return;
        int min = INT_MAX;
        int i=0, temp=0;
        while ( i< m )
        {
            if (nums2[0] < nums1[i])
            {
               temp = nums1[i];
                nums1[i] = nums2[0];
                nums2[0] = temp;
                linear_sort(nums2);

            }
            i++;


        }
        while (i < m+n)
        {
            nums1[i] = nums2[i-m];
            i++;
        }
    }
};
