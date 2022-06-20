#include <stdio.h>

int max(int x, int y);
int min(int x, int y);

void main(){
	int i, j;
	printf("정수 2개를 입력하시오 : ");
	scanf("%d %d", &i, &j);
	printf("max(%d, %d) = %d \n", i, j, max(i, j));
	printf("min(%d, %d) = %d \n", i, j, min(i, j));
}

int max(int x, int y){			// max() 함수 정의 
	return(x > y ? x : y);		// 조건 기호로 하면 더 간단하긴 하네. 
}

int min(int x, int y){			// min() 함수 정의 
	return(x < y ? x : y);	
}
