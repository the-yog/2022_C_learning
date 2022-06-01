// 이 프로그램은 두 수를 입력 받아 곱의 결과를 출력한다
// 도입부 
#include <stdio.h>              // printf() 와 scanf() 를 사용하려고 헤더파일 포함시킴
#pragma warning(disable:4996)   //권장하지 않는 함수 사용에 대한 경고 메시지 무시

int a, b, c;      // 정수를 저장하는 변수 선언
int product(int x, int y);      // 사용자 함수 (아래에서 돌려준다)

// 메인 함수 시작
void main() {

printf("Enter a number between 1 ~ 100 : ");      // 1과 100 사이의 숫자를 입력받기 위한 글자 출력
scanf("%d", &a);     // 사용자가 입력한 값a 스캔함

printf("Enter a number between 1 ~ 100 : ");      // 1과 100 사이의 숫자를 입력받기 위한 글자 출력
scanf("%d", &b);     // 사용자가 입력한 값b 스캔함

c = product(a,b);      // 함수 이용해서 두 수를 곱함

printf("%d * %d = %d \n", a, b, c);     // 그리고 위의 값을 출력

}

// 두 수의 곱을 계산하여 돌려주는 사용자 함수
int product(int x, int y){
  return (x * y); 
}
