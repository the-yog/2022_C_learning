#include <stdio.h>
#include <math.h>
void main(){
	double x = 12.34;
	int i = -5, j = 2;
	int a, b, c;
	a = ceil(x);						// x 이상의 최소 정수값 
	b = floor(x);						// x 미만의 최대 정수값 
	c = pow(4, j);						// xy 값 
	printf("abs(-5) = %d \n", abs(i));  // x의 절대값 
	printf("ceil(12.34) = %d \n", a);	 
	printf("cos(10)= %f \n", cos(10));	// x의 코사인값 
	printf("exp(2)= %.f \n", exp(j));	// x의 지수값
	printf("floor(12.34)= %d \n", b);
	printf("sqrt(2)= %5f \n", sqrt(j));	// x의 제곱근값 
	printf("pow(4,2)= %d \n", c);
} 
