#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	int sum = 0;   //변수를 초기화 이유는,.,>? !!!

	printf("Input Two integers\n");

	scanf("%d%d", &i, &j);

	sum = i + j;

	printf("Your numbers are %d plus %d,so %d\n", i, j, sum);

	printf("You and I BOth \n", i, j, sum);
	printf("I love Jason Mraz!!!!!!!!!!! \n", i, j, sum);



	return 0;
}


// & 앤퍼샌드  <-- 변수의 주소를 알려줌.