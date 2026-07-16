/*
#include <stdio.h>
int main(void)
{
	char str[10]; //정해진 크기 안에서만 받아오는게 좋다 
	printf("공백이 포함된 문자열입력 : ");
	fgets(str, sizeof(str), stdin);  //그래서 이렇게 사용함! 
	printf("문자열은 %s입니다.\n",str); //방 크기를 넘어서면 에러 !!
	return 0;
}
*/
