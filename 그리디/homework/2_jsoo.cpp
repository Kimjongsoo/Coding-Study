#include <stdio.h>

int main()
{
    //���� �� �ִ� �ִ��� �� ���� ������
    int n = 0; // ���л�
    int m = 0; // ���л�
    int k = 0; // ���Ͻ� ���α׷� �����л�
    int nTeamCnt = 0;

    scanf("%d %d %d", &n, &m, &k);

    //n/2 m �� ���� �ʿ��� �����л� ��
    for (int i = 0; i < k; i++)
    {
        if ((n / 2) >= m)
            n--;
        else
            m--;
    }

    if (n / 2 < m)
        nTeamCnt = n / 2;
    else
        nTeamCnt = m;

    printf("%d", nTeamCnt);

    return 0;
}