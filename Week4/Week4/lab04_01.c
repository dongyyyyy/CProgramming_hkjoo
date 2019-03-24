#include <stdio.h>
//1번문제
main()
{
	int i, n, sum;
	printf("정수 n값을 입력하시오 : ");
	scanf_s("%d", &n, sizeof(n)); // 입력

	printf("=====while문을 통한 1 ~ n까지의 합 출력=====\n");
	i = 1, sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("1 ~ n까지의 합 = %d\n", sum);

	printf("=====for문을 통한 1 ~ n까지의 합 출력=====\n");

	sum = 0; // sum에 while반복문을 통해서 저장된 값이 있기 때문에 초기화 작업이 필요.
	
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("1 ~ n까지의 합 = %d\n", sum);
}