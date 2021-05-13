#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long int x, y;
    long long int res = 0;
    vector <long long int> res_vec;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
        {
            if (x&1)
            {
                res = ((x-1)*(x-1) + 1) + y - 1;
            }
            else
            {
                res = (x*x) - y + 1;
            }
        }
        else
        {
            if (y&1)
            {
                res = (y*y) - x + 1;
            }
            else
            {
                res = ((y-1)*(y-1) + 1) + x - 1;
            }
        }
        res_vec.push_back(res);
        res = 0;
    }

    for (auto i:res_vec)
    {
        cout << i << '\n';
    }
    return 0;
}
