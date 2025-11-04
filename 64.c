//Find the digit that occurs the most times in an integer number.


#include <stdio.h>
int main() 
{
    long long n;
    int f[10] = {0}, d, i, mx = 0;
    scanf("%lld", &n);
    if (n < 0) n = -n;
    if (n == 0) f[0] = 1;
    while (n > 0) 
    {
        d = n % 10;
        f[d]++;
        n /= 10;
    }
    for (i = 0; i < 10; i++) 
    {
        if (f[i] > mx) mx = f[i];
    }
    for (i = 0; i < 10; i++) 
    {
        if (f[i] == mx) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
