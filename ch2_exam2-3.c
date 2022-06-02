#include "exam2_3.h"    
// exam2_3.c 파일과 동일 디렉터리에 있는 헤더파일을 포함

void main(){
	int add_result, sub_result; 
        // add_result, sub_result 라는 변수를 정수형으로 저장할 것으로 선언한다.
	printf("10과 5를 더하면 %d이다. \n",ADD(10,5));
        // 매크로 ADD에 각각 10과 5의 값을 넣어 나온 결과를 화면에 표시한다.
	printf("10에서 5를 빼면 %d이다. \n",SUB(10,5));
        // 매크로 SUB에 각각 10과 5의 값을 넣어 나온 결과를 화면에 표시한다.
}
