#include <stdio.h>
#pragma warning(disable:4996)
void main(){
  int a;
  printf("정수입력(1~200) : ");
  scanf("%d", &a);   // 정수를 입력받아서 변수 a에 저장
  if(a < 100)        // 변수 a의 값이 100보다 크면 printf문 실행X
    printf("입력한 정수가 100보다 작음. \n");
  printf("a = %d", a);
}
