#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (num < 0)
        {
            negativeSum += num;
        }
        else
        {
            positiveSum += num;
        }
    }

    printf("%d %d", positiveSum, negativeSum);

    return 0;
}