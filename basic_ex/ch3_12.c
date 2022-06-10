#include <stdio.h>
void main(){
  int a = 4, b = 7, c, d, e;
  c = a > 2 && b <= 7;    // a가 2보다 크니까 참이고 b도 7과 같거나 작은건 참이니 c는 참이다. &&(논리곱)
  printf("c = %d \n", c);
  d = a < 2 || b <= 7;    // a가 2보다 큰데? 거짓! b는 참인데? ||(논리합) 둘 중 하나 참이면 참이다.
  printf("d = %d \n", d);
  e = !a;                 // a 값이 0이 아니라 참인데 이걸 부정하니까 거짓! !(논리부정)
  printf("e = %d \n", e);
}
