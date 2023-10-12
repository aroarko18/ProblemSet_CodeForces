#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, m, a;
    double height, width;

    scanf("%lld %lld %lld", &n, &m, &a);

    height = ceil((double)n / (double)a);
    width = ceil((double)m / (double)a);

    long long int total = (height * width);

    printf("%lld", total);
    return 0;
}