#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, X, A, B, sol;
	vector<int> res;

	cin >> T;

	while (T--)
	{
	    cin >> X >> A >> B;

        sol = A + (100-X)*B;
        res.push_back(sol*10);

	}

	for (int i : res)
	{
	    cout << i << "\n";
	}

	return 0;
}
