#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//�Է¹��� ������ ���ڿ�ó�� �����ؼ� �� ���ڵ��� ������ ���� ū 30�� ����� ������

	//long long n = 0; //�Է� ���� ��
	string arrInput; // ���ڿ��� �ٲٱ�
	bool bExist0 = false; //0�� �ִ��� Ȯ��
	bool bbaesu3 = false; //3�� �ִ��� Ȯ��
	int sum = 0; //���ڸ� �� ��

	//30 �� �Ƿ��� 30���� ������ �������� ���ų�  10�� ���&&���� ���ؼ� 3�ǹ�� �Ǿ���

	//0�� ���ų� ���ؼ� 3�� ����� �ƴϸ� -1 ��������
	//scanf("%s", arrInput);
	cin >> arrInput;
	//sprintf(arrInput, "%d", n);

	//for (int i = 0; i < strlen(arrInput); i++)
	//{
	//	char tmp[1];
	//	tmp[0]= arrInput[i];
	//	int ntmp = atoi(tmp);
	//	if (ntmp == 0)
	//		bExist0 = true;

	//	sum += ntmp;

	//}

	sort(arrInput.begin(), arrInput.end(), greater<>());
	if (arrInput[arrInput.length() - 1] != '0')
	{
		cout << -1;
	}
	else
	{
		for (auto o : arrInput)
		{
			sum += o - '0';
		}
		if (sum % 3 == 0)
			bbaesu3 = true;
		if (bbaesu3 /*&& bExist0*/)
		{
			//{{ū����� ����

			//for (int i = 0; i < strlen(arrInput); i++)
			//{
			//	char tmp[1];
			//	tmp[0] = arrInput[i];
			//	int ntmp = atoi(tmp);

			//	for (int j = i + 1; j < strlen(arrInput); j++)
			//	{
			//		char tmp2[1];
			//		tmp2[0] = arrInput[j];
			//		int ntmp2 = atoi(tmp2);
			//		if (ntmp < ntmp2)
			//		{
			//			arrInput[i] = arrInput[j];
			//			arrInput[j] = ntmp + '0';
			//			ntmp = ntmp2;
			//			//sprintf(&arrInput[j], "%c", ntmp2);
			//		}
			//	}
			//}

			cout << arrInput;

			//}}

			//��� ���
			//if(atoi(arrInput) %10 != 0)
			//	printf("%d", -1);
			//else
				//printf("%d", atoi(arrInput));
			//printf("%s", arrInput);

		}
		else
			cout << -1;


	}



	return 0;
}
