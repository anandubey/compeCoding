#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <type_traits>

using std::cin;
using std::cout;

void update(int *a,int *b)
{
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
