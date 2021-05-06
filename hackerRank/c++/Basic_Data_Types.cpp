#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    std::cout << std::fixed;
    std::cout << std::setprecision (3) << f << std::endl;
    std::cout << std::setprecision (9) << d << std::endl;
    return 0;
}
