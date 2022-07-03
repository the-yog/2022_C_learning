#include <stdio.h>
void main(){
	char *cp = "COMPUTER";
	// char형 포인터 변수값은 문자열이 수록된 시작 주소
	int i = 0;
	do
	  printf("*(cp+%d): %c \n", i, *(cp+i));
	  
	while(*(cp+i++) != '\0'); // '\0'이 아닐 때까지  i를 1씩 증가 
}
