#include <stdio.h>
void main(){
  
  int a, b, c;    // 무조건 정수!
  a = b = c = 0;  // 처음에 세 정수는 모두 0
  
  a = ++b + ++c;  // b와 c의 값을 1씩 전치 증가한 값의 합이 a의 값이 됨
  printf("a = ++b + ++c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
  
  a = b++ + c++;  // c의 값을 1 증가 시키고, b와 더한 후에 a에 대입하고나서 b의 값을 1 증가
  printf("a = b++ + c++ 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
  
  a = b-- + --c; // c의 값을 1 감소 시키고, b와 더한 후에 a에 대입하고나서 b의 값을 1 감소
  printf("a = b-- + c-- 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
}
