#include <stdio.h>
void fcn1();
void main(){
	int i = 10;// 변수 i는 main() 함수 내부에 선언되어 main()함수 에서만 사용가능
		printf("main i = %d \n", i);
	fcn1();
	printf("main i = %d \n", i);
}
void fcn1(){
	int i;// 변수 i는 fcn1() 함수 내부에 선언된 지역변수, main()함수의 변수 i와 별개 
	i = 20;
	printf("fcn1 i = %d \n", i);
}
