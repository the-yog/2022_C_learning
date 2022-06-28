#include <stdio.h>
void main(){
	char name[] = " yog lee";
	char adrs1[6] = {'u', 'l','s','a','n','\0'}; //마지막 요소를 \0로
	char adrs2[6] = {'u', 'l','s','a','n'}; //마지막 요소를 \0 없이
	printf("name : %s \n", name);
	printf("adrs1: %s \n", adrs1);
	printf("adrs2: %s \n", adrs2);
}
