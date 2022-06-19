#include <stdio.h>
int sum(int a, int b){	//호출된 함수가 main() 함수 이전에 정의됨 
	return(a+b);
} 

void main(){
	printf("sum=%d", sum(100, 200));
}
