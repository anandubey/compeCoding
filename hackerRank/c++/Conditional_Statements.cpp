#include <bits/stdc++.h>

using namespace std;

string name[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n <= 9 && n >= 1)
    {
        cout << name[n-1];
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}
