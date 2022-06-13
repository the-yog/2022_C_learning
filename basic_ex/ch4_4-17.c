#include <stdio.h>
#pragma warning(disable:4996)
void main(){
	unsigned long int f;
	int n = 0;
	printf("계승을 구할 수를 입력하세요:");
	// 사용자는 아무거나 입력할 수 있음을 기억하자...☆
	scanf("%d", &n);
	f=n;
	printf("%d!=", n);
	// 음수가 입력 될 경우 무한 루프에 빠질 수 있다. 
	while(--n > 0)
	// while(--n) 을 while( --n>0 ) 으로 수정!
	 f *= n;
	printf("%lu \n", f); 
} 
