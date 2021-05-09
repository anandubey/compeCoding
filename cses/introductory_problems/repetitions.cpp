#include <bits/stdc++.h>

using namespace std;

int main()
{
    int low=0, upp=0, max_len=0, temp_len=0;
    string inp;
    cin >> inp;
    for (int i=0; i<inp.size(); i++)
    {
        if (inp[i+1] == inp[low])
        {
            upp += 1;

        }
        else
        {
            temp_len = upp - low + 1;
            if (temp_len > max_len)
            {
                max_len = temp_len;
            }
            upp = i+1;
            low = i+1;
        }
    }
    temp_len = upp - low + 1;
    if (temp_len > max_len)
    {
        max_len = temp_len;
    }
    if (max_len == 0)
        cout << 1;
    else
        cout << max_len;
   return 0;
}
