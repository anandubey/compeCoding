#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;

int main()
{
    vector<string> names{"zero", "one", "two", "three","four","five", "six","seven","eight","nine"};
    int a, b;
    cin >> a >> b;
    for (int i=a; i<=b; i++)
    {
        if(i>=0 && i<=9)
        {
            cout << names[i] << '\n';
        }
        else if (i%2 == 0)
        {
            cout << "even" << '\n';
        }
        else
        {
            cout << "odd" << '\n';
        }
    }

    return 0;
}
