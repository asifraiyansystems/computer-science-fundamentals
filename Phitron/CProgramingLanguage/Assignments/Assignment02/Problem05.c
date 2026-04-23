#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    int x;
    int v;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d %d", &x, &v);

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == x)
        {
            arr[i] = v;
        }
        printf("%d ", arr[i]);
    }
}