#include<bits/stdc++.h>


using std::cin;
using std::cout;
using std::vector;


int main(int argc, char const *argv[])
{
	int n, inp;
	cin >> n;
	vector<int> nums(n+1, 0);
	for (int i=0; i<n-1; i++)
	{
		cin >> inp;
		nums[inp] = 1;
	}

	for (int i=1; i <= n; i++)
	{
		if (nums[i] == 0)
		{
			cout << i;
		}
	}

	return 0;
}