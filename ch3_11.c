#include <stdio.h>
void main(){
  int a = 4, b, c, d;
  b = a > 2 ;    // a가 2 보다 크니까 b는 참이므로 1 대입
  printf("b = %d \n", b);
  
  c = a < 2;    // a가 2 보다 큰데? 거짓이므로 c에 0 대입
  printf("c = %d \n", c);
  
  d = a == 4;   // a 랑 4는 같으니 참! d에 1 대입
  printf("d = %d \n", d);
}
