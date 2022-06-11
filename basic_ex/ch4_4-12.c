#include <stdio.h>
#pragma warning(disable:4996)
void main(){
	int i, n, c = 'A';
	while (1){						// 조건에 따른 while 반복문 
		printf("횟수는? ");
		scanf("%d", &n);
		for(i = 1; i <= n; i++){	// n번 반복하는 for 반복문 
			printf("%c", c);
			if(c == 'Q')
				goto end;			// 레이블 end로 무조건 이동 
			c++;
		}
		printf("\n\n");
	}
	end:							// end 뒤에 :(콜론) 붙이기!! 
	printf("\n\n끝");
}
