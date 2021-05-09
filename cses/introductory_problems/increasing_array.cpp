#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, moves=0;
    cin >> n;
    vector<int> nums(n, 0);
    for (int &i : nums)
    {
        cin >> i;
    }
    for (int i=0; i < nums.size()-1; i++)
    {
        if (nums[i+1] < nums[i])
        {
            moves = moves + abs(nums[i] - nums[i+1]);
            nums[i+1] = nums[i];
        }
    }
    cout << moves;
    return 0;
}
