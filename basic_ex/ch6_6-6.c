#include <stdio.h>
void main(){
	char str_in[50], str_out[50];	//문자열을 저장하려는 배열 선언
	int i = 0;
	printf("문자열을 입력하시오. :");
	scanf("%s", str_in);
	do{
		str_out[i]='*';	// str_in 배열의 문자를 *로 바꿔 str_out 배열에 저장 
		i++;
	} while (str_in[i] != '\0');
	str_out[i] = '\0';	// 문자열의 끝을 나타내기 위해 null 문자 저장
	printf("입력 문자열 배열 str_in = %s \n", str_in);
	printf("출력 문자열 배열 str_out= %s \n", str_out);
}
