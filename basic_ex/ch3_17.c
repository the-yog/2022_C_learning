#include <stdio.h>
void main(){
  int a = 3, b = 4;
  double c;
  c = (double)a / b;
  printf("나눗셈 결과: %f \n", c);   // a 앞에 (double) 붙여서 강제로 형변환

}
