#include <stdio.h>

void static main()
{

    char input[20]; //입력받는 대상
    long long nResult = 0; //과정을 수행해야 하는 최소 개수

    scanf("%s", &input); //Input

    for (int i = 0; i < strlen(input); i++)
    {
        int ntmp = atoi(input[i]); // i 번째 문자 숫자로 치환

        if (ntmp == 0 || ntmp == 1)
            nResult += ntmp;
        else
            nResult *= ntmp;
    }

    prinf("%lld", nResult);
}