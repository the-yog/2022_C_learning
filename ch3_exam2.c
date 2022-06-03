#include <stdio.h>
void main(){
  printf("%%d : %d \n", 2147483647);  // 부호 있는 10진 정수로 변환해 출력 (char, short int, int)
  printf("%%1d : %ld \n", 2147483647);  // 부호 있는 10진 long 정수로 변환해 출력 (long int)
  printf("%%lld : %lld \n", 9223372036854775807); // 부호 있는 10진 long long 정수로 변환해 출력 (long long int)
  printf("%%u : %u \n", 4294967295);  // 부호 없는 10진 정수로 변환해 출력 (unsigned int)
  printf("%%o : %o \n", 4294967295);  // 부호 없는 8진수로 변환해 출력 (unsigned int)
  printf("%%x : %x \n", 4294967295); 
  printf("%%X : %X \n", 4294967295);  // X, x 모두 부호 없는 16진수로 변환해 출력 (unsgined int)
  printf("%%f : %f \n",1234.5678);  
  printf("%%lf : %lf \n", 1234.5678); // f, lf 모두 10진 부동소수점 형식으로 변환해 출력 (long double)
  printf("%%e : %e \n", 1234.5678); // 예시엔 없지만 E도 e처럼 지수 형태로 출력 (float, double)
  printf("%%c : %c \n", 'a'); // 한 문자로 변환해 출력 (char, short int, int)
  printf("%%s : %s \n", "knou"); // 문자열로 변환해 출력 (char *)
} // %p 의 경우는 포인터 주소값을 출력 (void *)

/* think about this...
printf() 함수가 사용됐을 때 어떤 결과가 출력될까? 에러가 발생할까? 에러가 안난다면 어떤 결과가 출력될까?

1. printf("test", 123);
  test 라는 것에 대한 정의가 없어서 123 출력x ---> 땡! test 만 출력o

2. print("test %d");
  test + 아무 숫자나 출력o ---> 반만 땡! 실행할 때 마다 %d 값이 다르게 출력o
  
*/
