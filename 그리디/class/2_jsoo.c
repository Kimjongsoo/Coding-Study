#include <stdio.h>

void static main()
{

    int n, k = 0; //�Է¹޴� ���
    int cnt = 0; //������ �����ؾ� �ϴ� �ּ� ����

    scanf("%d %d", &n, &k); //Input

    while (n > 1)
    {
        //n�� k�� ������ 0�� �� ��
        if (n % k == 0)
        {
            n = n / k; //���� ���� n�� ����
        }
        else //�������� ���� �� 
        {
            n = n - 1;
        }

        cnt++;
    }

    prinf("%d", cnt);
}