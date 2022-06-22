#include <stdio.h>
void fcn1();
int x; // 전역변수, 가급적 선두에 위치하는 게 좋음. 초기화하지 않으면 0으로 자동초기화

void main(){
	printf("1)x = %d \n", x);
	fcn1();
	printf("2)x = %d \n", x);
}

void fcn1(){
	x++;//전역변수이므로 어디에서나 사용 가능 
}
