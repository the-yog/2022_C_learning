#include <stdio.h>
void swap(int x, int y);		// swqp() 함수의 원형 선언
void main(){
	int a = 3, b = 5;
	printf("호출 전 a = %d, b = %d \n", a, b);
	swap(a, b);					// swqp() 함수 호출 
	printf("호출 후 a = %d, b = %d \n", a, b);
} 
void swap(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("함수 내 x = %d, y = %d \n", x, y);
}
