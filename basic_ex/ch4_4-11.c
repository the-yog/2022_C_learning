#include <stdio.h>
#pragma warning(disable:4996)
void main(){
	int i;
	printf("정수 입력(1~10): ");
	scanf("%d", &i);
	if(i==5)
		goto FIVE;		// 레이블 이름 FIVE로 무조건 옮김
	else if(i==6)
		goto SIX;		// 레이블 이름 SIX로 무조건 옮김 
	else
		goto EXIT;		// 레이블 이름을 EXIT로 무조건 실행으로 옮김 
FIVE:					// 레이블 이름 
	printf("입력한 숫자는 5입니다. \n");
	goto EXIT;  		// 레이블 이름을 EXIT로 무조건 실행으로 옮김
SIX:					// 레이블 이름 
	printf("입력한 숫자는 6입니다. \n");
	goto EXIT;			// 레이블 이름을 EXIT로 무조건 실행으로 옮김 
EXIT:					// 레이블 이름 
	printf("프로그램을 종료합니다. \n");
}
