#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n=0, q=0, k=0, temp_val, i, j;
    std::cin >> n >> q;
    std::vector<std::vector<int>> a;
    std::vector<vector<int>> queries;
    while(n--)
    {
        std::cin >> k;
        temp_val = 0;
        std::vector<int> temp_vec;
        for (int i=0; i<k; i++)
        {
            std::cin >> temp_val;
            temp_vec.push_back(temp_val);
        }
        a.push_back(temp_vec);
        temp_vec.clear();
    }
    while (q--){
        std::cin >>  i >> j;
        std::vector<int> temp_vec{i, j};
        queries.push_back(temp_vec);
        temp_vec.clear();
    }
    for (int i=0; i<queries.size(); i++){
        cout << a[queries[i][0]][queries[i][1]] << '\n';
    }
    return 0;
}
