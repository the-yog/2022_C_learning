#include <stdio.h>
#pragma warning(disable:4996) // 난 이제 VS에서 실행 안하는데 -_-;; 
void main(){
	int i = 0, n;
	int sum = 0;
	printf("n=? ");
	scanf("%d", &n);
	do {									// do ~ while 루프 시작 
		sum = sum+i;
		i++;
	} while(i <= n);						// 세미콜론 꼭 쓰기! 
	printf("i= %d \n", i);
	printf("i ~ %d까지 합 = %d \n", n, sum);
} 
