#include <stdio.h>
int main()
{
    int n,cnt = 0;
    scanf("%d", &n);
    

    //500원으로 나눌 수 있을 때
    cnt += (n / 500);

    n = n % 500;

    cnt += (n / 100);
    
    n = n % 100;

    cnt += (n / 50);

    n = n % 50;

    cnt += (n / 10);


    printf("%d", cnt);
    return 0;
}