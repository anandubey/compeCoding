#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x, k;
	cin >> t;
	std::vector<string> res;
	while (t--)
	{
	    cin >> n >> x >> k;
	    if (x%k == 0)
	    {
	        res.push_back("YES");
	        continue;
	    }
	    else if ((n+1-x) % k == 0)
	    {
	        res.push_back("YES");
	        continue;
	    }
        res.push_back("NO");
	}

	for (string i:res){
	    cout << i << "\n";
	}

	return 0;
}
