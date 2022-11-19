#include <stdio.h>

void static main()
{

    int n, k = 0; //입력받는 대상
    int cnt = 0; //과정을 수행해야 하는 최소 개수

    scanf("%d %d", &n, &k); //Input

    while (n > 1)
    {
        //n을 k로 나눠서 0이 될 때
        if (n % k == 0)
        {
            n = n / k; //나눈 몫을 n에 저장
        }
        else //나눠지지 않을 때 
        {
            n = n - 1;
        }

        cnt++;
    }

    prinf("%d", cnt);
}