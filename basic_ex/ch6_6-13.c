#include <stdio.h>
void main(){
	int *p, a[] ={10, 20, 30, 40, 50};
	p = &a[0];
	// 배열 첫 번째 요소 주소값을 포인터 변수p에 저장
	
	printf("*p  == %d \n", *p);
	printf("*p++  == %d \n", *p++);
	// 포인터 p의 값을 출력하고 주소 1(4byte)증가 : 자료형 int
	
	printf("*++p == %d \n", *++p);
	// 포인터 p의 주소 1(4byte) 증가 하고 포인터 p 값 출력
	
	p = p + 2;
	printf("*p  == %d \n",*p);
	printf("a[2]  == %d \n", a[2]);
	printf("*p+2  == %d \n", *p + 2); // 포인터 p값의 크기 2 증가 
}
