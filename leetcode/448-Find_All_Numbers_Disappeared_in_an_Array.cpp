class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing{};

        for (int i=0; i<nums.size(); i++){
            if (nums[abs(nums[i])-1] > 0){
                nums[abs(nums[i])-1] *= -1;
            }
        }

        for (int i=0; i<nums.size(); i++){
            if (nums[i] > 0)
                missing.push_back(i+1);
            else
                continue;
        }
        return missing;
    }
};
