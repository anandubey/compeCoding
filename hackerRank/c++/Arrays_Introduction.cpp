#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    std::cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i=n-1; i>=0; i--)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
