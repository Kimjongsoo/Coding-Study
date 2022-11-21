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
	//입력받은 정수를 문자열처럼 생각해서 그 숫자들을 조합해 가장 큰 30의 배수로 만들자

	//long long n = 0; //입력 받은 수
	string arrInput; // 문자열로 바꾸기
	bool bExist0 = false; //0이 있는지 확인
	bool bbaesu3 = false; //3이 있는지 확인
	int sum = 0; //각자리 수 합

	//30 이 되려면 30으로 나눠서 나머지가 없거나  10의 배수&&모든수 더해서 3의배수 되야함

	//0이 없거나 더해서 3의 배수가 아니면 -1 리턴하자
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
			//{{큰수대로 정렬

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

			//결과 출력
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
