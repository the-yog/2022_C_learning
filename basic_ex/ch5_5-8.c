#include <stdio.h>
void swap(int *x, int *y);	// swap() 함수의 원형 선언
void main(){
	int a = 3, b = 5;
	printf("호출 전 a = %d, b = %d \n", a, b);
	swap(&a, &b);	// 실매개변수 앞에 주소값을 전달하기 위해 주소 연산자 & 붙임 
	printf("호출 후 a = %d, b = %d \n", a, b);
}

void swap(int *x, int *y){	// 주소값을 전달받으려고 포인터 변수 int *x, int *y 선언 
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("함수 내 x = %d, y = %d \n", *x, *y);
}

