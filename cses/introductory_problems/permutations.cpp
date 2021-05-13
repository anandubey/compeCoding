#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, lim=0;
    cin >> n;
    long int mid = 1l + (n-1)/2;
    vector<long int> res;
    if (n==2 || n==3){
        cout << "NO SOLUTION";
    }
    else
    {
        if (n&1)
        {
            for (long int i=1; i <= n/2; i++)
            {
                res.push_back(mid+i);
                res.push_back(mid-i);
            }
            res.push_back(mid);
        }
        else
        {
            for (long int i=1; i <= n/2-1; i++)
            {
                res.push_back(mid+i);
                res.push_back(mid-i);
            }
            res.push_back(n);
            res.push_back(mid);
        }

        for (long int i:res)
        {
            cout << i << " ";
        }
    }
    return 0;
}
