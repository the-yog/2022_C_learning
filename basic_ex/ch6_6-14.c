#include <stdio.h> 
void main(){
	int *p, *q;
	int a[] = {10,20,30,40,50,60,70,80,90,100};
	p = &a[3];
	printf("*p == %d \n", *p);
	printf("*(p+3) ==%d \n", *(p+3)); // *(p+3)과 *p+3 구별
	q = p+3;
	printf("*q == %d \n", *q);
	printf("p - q == %d \n", p - q);  // 두 포인터 간 뺄셈
	printf("q - p == %d \n", q - p);  // 두 포인터 간 뺄셈
	// printf("q + p == %d \n", p + q); // 두 포이넡 간 덧셈 X 
}
