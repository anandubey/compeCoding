#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int power(long long x, unsigned int y, int p);


int power(long long x, unsigned int y, int p)
{
    int res = 1;

    x = x % p;
    if (x == 0)
    {
        return 0;
    }

    while (y > 0)
    {

        if (y & 1)
        {
            res = (res*x) % p;
        }

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}


int main()
{
	int t, n;
	long int r;
	vector<int> res;

	cin >> t;

	while(t--)
	{
	    cin >> n;
	    if ( n > 2 )
	    {

	        r = power(2, n-1, MOD);
	    }
	    else if (n == 1)
	    {

	        r = 1;
	    }
	    else
	    {
	        r = 2;
	    }

	    res.push_back(r);
	}

	for (int i:res)
	{
	    cout << i << "\n";
	}

	return 0;
}
