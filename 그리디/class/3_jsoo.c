#include <stdio.h>

void static main()
{

    char input[20]; //�Է¹޴� ���
    long long nResult = 0; //������ �����ؾ� �ϴ� �ּ� ����

    scanf("%s", &input); //Input

    for (int i = 0; i < strlen(input); i++)
    {
        int ntmp = atoi(input[i]); // i ��° ���� ���ڷ� ġȯ

        if (ntmp == 0 || ntmp == 1)
            nResult += ntmp;
        else
            nResult *= ntmp;
    }

    prinf("%lld", nResult);
}