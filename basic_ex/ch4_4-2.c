#include <stdio.h>
void main(){
 int a = 10, b = 10;
  printf("if문 실행 전 : a = %d, b = %d \n", a, b);
  
  if(a > b){     // 조건을 만족하지 않으므로 중괄호 밖의 명령문으로!
     a = a + 20;
     printf("a = %d \n", a);
  }
  b = b + 20;
  printf("if문 실행 후 : a = %d, b = %d \n", a, b);
}
