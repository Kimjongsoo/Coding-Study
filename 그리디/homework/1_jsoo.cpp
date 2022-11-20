#include <stdio.h>
#include <string.h>

int main()
{
    int n, k = 0;
    int coin[10];
    int result = 0; //최소 동전 개수
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", coin[i]);

    for (int i = 0; i < n; i++)
    {
        result += (k / coin[n - i - 1]);
        k = (k % coin[n - i - 1]);

    }
    printf("%d", result);

    return 0;
}