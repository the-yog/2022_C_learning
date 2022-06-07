#include <stdio.h>
void main(){
  int a = 10, b;
  b = ( a > 15 ) ? ( a + 1 ) :  ( a - 1 );
  // a 는 15보다 크지 않아 조건을 만족하지 않아서 a-1 만 수행
  printf("b = %d", b);
}
