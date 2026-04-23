#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int maxValue = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > maxValue)
        {
            maxValue = x;
        }
    }

    printf("%d", maxValue);
    return 0;
}