#include <stdio.h>
void main() {

  char var='A';
  putchar(var);   // 함수의 괄호 속 문자형 변수가 사용됨
  putchar(var+1); // 수식이 사용됨 
  putchar('\n');  // escape 문자가 사용됨
  putchar('K');   // 문자형 상수가 사용됨
  putchar('K'+2); // 수식이 사용됨
  putchar('\007');  // escape 문자가 사용됨(\007은 \a 와 같은 의미)

}

/* putchar()함수는 문자 단위 출력함수, 
getchar() 함수와 반대로 지정된 문자를 화면에 출력하는 기능,
사용 형식에서 문자의 형태는 정수형 변수, 정수형 상수, 문자형 변수, 문자 및 수식이면 됨.
*/
