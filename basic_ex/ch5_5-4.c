#include<stdio.h>
int sum(int a, int b);	// 함수 원형 선언이 필요함

void main(){
	printf("sum = %d", sum(100,200));
} 

int sum(int a, int b){	// 호출된 함수가 main()함수 뒤에 정의됨 
	return(a+b);
}
