#include <stdio.h> 
int change(int *);// change 함수의 원형 선언
void main(){
	int a = 10;
	int *p = &a;// 포인터 변수p를 선언하고 변수a의 주소 저장 
	printf("함수 호출 이전의 a : %d \n", a);
	change(p);
	/* 함수의 매개변수인 k가 포인터 이므로 
	change 함수를 호출할 때 인자로 a 대신 
	a를 포인트하는 p를 매개변수로 전달함 */
	printf("함수 호출 이후의 a : %d \n",a);
}

int change(int *k) /* change 함수가 호출되면 p의 값(a의 주소)이
k로 전달되면서 가리키게 됨 */
{
	*k = *k  + *k;
	/* change 함수 내부에서는 k가 포인트하는 곳의 값을 다뤄야해서
	*k를 사용(포인터 변수를 매개변수로 하는 함수 호출은 
	참조에 의한 자료 방법 사용)*/ 
 } 
