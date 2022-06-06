#include <stdio.h>
#pragma warning(disable:4996)
void main(){

char s[50];    //문자열 저장을 위해 배열이름 's'인 배열 선언
  printf("문자열 입력하쉴?"); 
  gets(s);    // gets()를 이용해 문자열을 받음
  printf("gets()로 문자열 입력 = %s \n", s);
  printf("\n문자열 입력하쉴?");
  scanf("%s", s);   // scanf()를 이용하여 문자열을 받음
  printf("scanf()로 문자열 입력 = %s \n", s);
}

/* 아래에서 보듯이 gets()가 결과 값이 더 정확하다. 
 엔터 키를 누르기 전까지 공백을 포함한 문자열을 입력 받기 때문인데 
 엔터 키를 누르면 null 문자('\0')가 입력 됨.
 gets()의 변수는 배열이름이나 포인터 변수여야 함.*/
