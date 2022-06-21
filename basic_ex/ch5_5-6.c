#include <stdio.h>
int sum(int, int);

void test();
void main(){
	int s;
	test();				// 단순한 함수 호출 
	sum(10, 20);		// 단순한 함수 호출(호출 결과가 저장되지 않음) 
	s = sum(30, 40);	// 함수 호출 결과를 변수 s에 저장
	printf("sum from 30 to 40 = %d \n", s);
	printf("sum from 100 to 200 = %d \n", sum(100,200));
	// 함수 호출 결과를 직접 사용 
}

void test(){
	printf("함수의 여러 가지 사용 방법 \n");
}

int sum(int a, int b){
	int i, s = 0;
	for(i = a; i <= b; i++)
	 s = s + i;
	return s;
}
