#include <stdio.h>
void main(){
  float a = 3.14;
  printf("int형의 크기는 = d%바이트 \n", sizeof(int));
  // int(정수)형의 자료 크기를 출력 4 바이트
  printf("float형 변수 a의 크기는 = d%바이트 \n", sizeof(a));
  // float형인 a의 크기를 출력 4 바이트
}
