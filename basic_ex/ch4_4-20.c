#include <stdio.h>
void main(){
	int num, sum = 0;
	while(1){						// 무한 while 루프 
		printf("num(끝 : 0)...?");
		scanf("%d", &num);
		if(num==0)					// num 값이 0이면 루프 out 
			break;					// 나갈 때 필요한 break 
		sum = sum + num;
	}
	printf("sum = %d", sum);
} 
