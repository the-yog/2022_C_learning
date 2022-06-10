#include <stdio.h>
void main(){
	enum syllable {Do, Re, Mi, Fa} tone;	  // enum syllable 타입의 tone 선언하기
	for(tone = Do; tone <= Fa; tone += 1){  // Do, Fa를 숫자처럼 사용 가능! 
		switch(tone){
			case Do : printf("도는 도라이 \n");
			break;
			case Re : printf("레는 레미제라블 \n");
			break;
			case Mi : printf("미는 미치겠다\n");
			break;
			case Fa : printf("파는 파도파도 괴담만..");
			break;	
		}
	} 
}
