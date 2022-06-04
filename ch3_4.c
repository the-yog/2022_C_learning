#include <stdio.h>
#pragma warning(disable:4996) // 권장 x 함수 메시지 경고 무시
void main(){

  int a;
  long long int b;
  float c;
  char ch;
  char s[20];
  
  printf("정수와 long long 정수를 입력 : ");
  scanf("%d %lld", &a, &b);             // 정수 2개를 입력받아서 각 변수에 저장
  printf("a = %d, b = %lld \n", a, b);  // 화면에 입력한 것을 표시
  
  printf("실수를 입력 : ");
  scanf("%f", &c);                      // 실수 입력받아서 변수 c에 저장
  printf("c = %10.4f, c(지수) = %e \n", c, c);
  
  printf("문자를 입력 : ");
  scanf(" %c", &ch); // 문자 입력받아서 변수 ch에 저장, scanf 전의 enter 무시하려고 %c 앞에 공백 넣기
  printf("ch = %c \n", ch);
  
  printf("문자열을 입력 : ");
  scanf("%s", s);                       // 문자열을 입력받아서 배열 s에 저장
  printf("s[] = %s \n", s);
}
