#include <stdio.h>
void main(){
  char a;
  printf("문자 하나를 입력하세요 \n");
  a = getchar();    //한 문자가 입력될 때 문자형 변수 a에 저장함
  printf("c = %c \n", a);
}

/*getchar() 함수는 문자 단위의 입력함수, 
하나의 문자를 키보드를 통해 입력받고, 
이 문자를 저장하는 변수는 정수형이나 문자형으로 선언되어야 함. 
특히 getchar() 함수는 과롷 안에 인자를 지정하지 않음,
입력 후에는 enter 키를 눌러야만 자료가 입력됨. */
