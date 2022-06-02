#include <stdio.h>   // 선행처리기와 표준입출력 라이브러리 헤더파일
void main(){          // 자료형이 없다는 뜻의 예약어 void와 main() 함수
	printf("char 자료형 크기 : %d byte\n", sizeof(char));
        /* 문자형 자료형인 char의 크기에 byte를 붙여 화면에 표시
           printf()함수 속의 sizeof()는 괄호 속에 있는 배열이나 자료형의 크기를 알려줄 수 있다.
           자료형의 크기는 사용하는 컴퓨터의 사양(CPU가 처리하는 bit 수)에 따라 다를 수 있다. */
	printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));
        /* signed char는 부호를 갖는 문자 자료형이며, signed 나 unsigned가 붙으면 2의 보수체계를
           따른다. signed char의 크기에 byte를 붙여 화면에 표시한다.*/
	printf("unsigned char 자료형 크기 : %d byte\n", sizeof(unsigned char));
        // 부호를 갖지 않는 문자형 자료형인 unsigned char의 크기에 byte를 붙여 화면에 표시
	printf("short 자료형 크기 : %d byte\n", sizeof(short));
        // 정수형 자료형인 short가 차지하는 크기에 byte를 붙여 화면에 표시
	printf("short int 자료형 크기 : %d byte\n", sizeof(short int));
        // 정수형 자료형인 short int의 크기에 byte를 붙여 화면에 표시
	printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
        // 부호를 갖는 정수형 자료형인 signed short의 크기에 byte를 붙여 화면에 표시
	printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
        // 부호를 갖는 정수형 자료형인 signed short int의 크기에 byte를 붙여 화면에 표시
 	printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
        // 부호를 갖지 않는 정수형 자료인 unsigned short의 크기에 byte를 붙여 화면에 표시
	printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
        // 부호를 갖지 않는 정수형 자료인 unsigned short int의 크기에 byte를 붙여 화면에 표시
	printf("int 자료형 크기 : %d byte\n", sizeof(int));
        // 대표적인 정수형 자료인 int의 크기에 byte를 붙여 화면에 표시
	printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
        // 부호를 갖는 정수형 자료 signed int의 크기에 byte를 붙여 화면에 표시
	printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));
        /* unsigned의 크기에 byte를 붙여 화면에 표시
           참고로 unsigned는 정수형 자료와 함께 사용하면 저장 가능 범위(양수)를 2배로 늘린다. */
	printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));
        // 부호를 갖지 않는 정수형 자료 int의 크기에 byte를 붙여 화면에 표시
	printf("long 자료형 크기 : %d byte\n", sizeof(long));
        // 정수형 자료형인 long의 크기에 byte를 붙여 화면에 표시하고, long은 16bit 정수형이다.
	printf("long int 자료형 크기 : %d byte\n", sizeof(long int));
        // 정수형 자료형인 long int의 크기에 byte를 붙여 화면에 표시
	printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));
        // 부호를 갖는 정수형 자료형인 signed long의 크기에 byte를 붙여 화면에 표시
	printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));
        // 부호를 갖는 정수형 자료형인 signed long의 크기에 byte를 붙여 화면에 표시
	printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long));
        // 부호를 갖지 않는 정수형 자료형인 unsigned long의 크기에 byte를 붙여 화면에 표시
	printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));
        // 부호를 갖지 않는 정수형 자료형인 unsigned long int의 크기에 byte를 붙여 화면에 표시
	printf("long long 자료형 크기 : %d byte\n", sizeof(long long));
        // 정수형 자료형인 long long의 크기에 byte를 붙여 화면에 표시
	printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int));
        // 정수형 자료형인 long long int의 크기에 byte를 붙여 화면에 표시
	printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long));
        // 부호를 갖는 정수형 자료형인 signed long long의 크기에 byte를 붙여 화면에 표시
	printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int));
        // 부호를 갖는 정수형 자료형인 signed long long int의 크기에 byte를 붙여 화면에 표시
	printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long));
        // 부호를 갖지 않는 정수형 자료형인 unsigned long long의 크기에 byte를 붙여 화면에 표시
	printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int));
        // 부호를 갖지 않는 정수형 자료형인 unsigned long long int의 크기에 byte를 붙여 화면에 표시
	printf("float 자료형 크기 : %d byte\n", sizeof(float));
        // 실수형 자료형인 float의 크기에 byte를 붙여 화면에 표시
	printf("double 자료형 크기 : %d byte\n", sizeof(double));
        // 실수형 자료형인 double의 크기에 byte를 붙여 화면에 표시
	printf("long double 자료형 크기 : %d byte\n", sizeof(long double));
        /* 실수형 자료형인 long double의 크기에 byte를 붙여 화면에 표시한다. 기본형은 double이다. 
           또한 float, double, long double 자료형 순으로 오차범위가 적다. */
}
