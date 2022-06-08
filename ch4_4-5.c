#include <stdio.h>
#pragma warning(disable:4996)
void main(){
  int a;
  printf("정수를 입력하세요 : ");
  scanf("%d", &a);      // 정수를 입력받아서 변수 a에 저장
  if(a >= 0 )
    if(a == 0 )         // 1번 조건, 2번 조건 모두 만족할 경우 출력
      printf("입력된 값은 0");
    else                // 1번 조건 만족, 2번 조건 만족 X 경우 출력
      printf("입력된 값은 양수");
  else                  // 1번 조건 만족 X 경우 출력
     printf("입력된 값은 음수");
}
