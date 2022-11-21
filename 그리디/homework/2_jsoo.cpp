#include <stdio.h>

int main()
{
    //만들 수 있는 최대의 팀 수를 구하자
    int n = 0; // 여학생
    int m = 0; // 남학생
    int k = 0; // 인턴쉽 프로그램 참여학생
    int nTeamCnt = 0;

    scanf("%d %d %d", &n, &m, &k);

    //n/2 m 중 많은 쪽에서 인턴학생 빼
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