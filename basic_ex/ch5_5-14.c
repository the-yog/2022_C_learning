#include <stdio.h>
void main(){
	register int num1 = 10;	// 변수 num1은 cpu의 레지스터를 사용 
	register long long int num2 = 20;
	// 변수 num2는 cpu의 레지스터를 사용(32bit 컴이면 컴파일 오류 생김) 
	printf("num1 size = %d, num2 size = %d \n", sizeof(num1), sizeof(num2));
	printf("%p, %p \n", &num1, &num2);
	// 컴파일 에러. num1과 num2는 메모리에 없어서 주소를 구할 수 없음 
	num2 = 0;
	for(num1 = 0; num1 <= 10; ++ num1)
		num2 += num1;
	num1--;
	printf("num1 = %d, num2 = %lld", num1, num2);
}
