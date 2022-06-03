#include <stdio.h> // 헤더파일 포함시키기
void main() {
  char c = 'A'; // 문자 c 에 A를 
  int i = 10, j = 20, k = 30; // 정수 i 에 10, j 에 20, k 에 30
  printf("간단한 출력 프로그램 \n"); // 화면에 입력한 대로 표시
  printf("c = %c,  c의 아스키 코드값은 %d \n", c, c); // 알파벳에는 아스키 코드값이 있다. A의 아스키 값에 해당하는 값을 화면에 표시.
  printf("i = %d, j = %d, k = %d", i, j, k);
}
