#include <stdio.h>
void main(){
	int i, j;
	i = 2;						// 초기식(i=2) 
	while( i <= 9){				// 조건식(i<=9) 
		printf("-%d단-", i);
		i++;					// 증감식(i++) 
	}
	printf("\n");
	i=1;						// 외부 while문 초기식(i=1) 
	while(i<=9){				// 외부 while문, 행을 만든다. 
		j=2;					// 내부 while문 초기식(j=2) 
		while(j<=9){			// 내부 while문, 열을 만든다. 
			printf(" %dx%d=%2d", j, i, j*i);
			j++;				// 내부 while문 증감식(j++) 
		}
		printf("\n");
		i++;					// 외부 while문 증감식(i++) 
	}
}
