#include <stdio.h>
#include <math.h>
void main(){
	int num = 1;
	while(num != 0){				// num이 0이 아니면 무한 반복 루프 
		printf("num=?(0: 종료):");
		scanf("%d", &num);
		if(num<0){					/* num이 음수이면 continue 실행,
		                              while문 선두로 복귀 */  
			printf("num: Negative number \n\n");
			continue;
		}
		printf("Squareroot of %d = %f \n\n", num, sqrt(num));
	}
	printf("The end \n");
} 
