#include <stdio.h> 
void extern_ex();	// extern_ex() 함수 원형
char s[100];		// 전역변수 s 선언
void main(){
	printf("문자열을 입력하세요 : ");
	scanf("%s", s);	// 전역변수 s에 문자열 저장
	printf("입력받는 문자열 %s 전역변수 s에 저장되었습니다. \n", s);
	extern_ex();	// extern() 함수 호출 
} 

extern char s[];	// 변수 a를 외부 변수로 선언
void extern_ex(){
	printf("외부변수 s값은 %s입니다. \n", s);
	// 외부변수 a값을 출력! 
}

extern char s[];	// 변수 a를 외부 변수로 선언
void extern_ex(){
	printf("외부변수 s값은 %s입니다. \n", s);
	// 외부변수 a값을 출력! 
}
