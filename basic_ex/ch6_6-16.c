#include<stdio.h>
void main(){
	static int a[] = {10, 20, 30, 40, 50};
	int *pa, b, c, d;
	pa = a; // 배열명을 사용하여 배열의 시작 주소 할당
	b = *pa + *(pa+4); // b=a[0]+a[4]
	pa += 4;		   // pa=&a[0+4]
	c = *pa + *(pa-4); // c=a[4]-a[0]
	d = *pa + 5;	   // d=a[4]+5
	printf("b=%d, c=%d, d=%d", b, c,d);
} 
