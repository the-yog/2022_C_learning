#include <stdio.h>
#pragma warning(disable:4996)
void main(){
  int a;
  printf("정수를 입력하세요:");
  scanf("%d", &a);      // 정수를 입력받아 변수 a에 저장
  if(a % 2 == 0 )       // % 연산 결과가 0이면 참(짝수), 1이면 거짓(홀수) 
  {
  	printf("입력한 정수는 %d입니다. \n", a);
  	printf("%d는 짝수입니다. \n", a);
	}  
  else
  {
  	printf("입력한 정수는 %d입니다. \n", a);
  	printf("%d는 홀수입니다. \n", a);
  }
}
