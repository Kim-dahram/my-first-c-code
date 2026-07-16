#include <stdio.h>
int main(void)
{
int num, grade;

printf("학번입력: "); //
scanf("%d", &num);  // 입력하면 버퍼 저장 , 이후에 scanf호출 하면 버퍼에 있는 정수를 가져온다 
getchar();     //겟차 초기화 해서 엔터 남아있는걸 날리기  
printf("학점입력 : ");
//scanf("%c", &grade);  이렇게 해도 실행 가능함 ...
grade = getchar();  // 이번에 받는 문자는 grade에 저장 
printf("학번: %d, 학점 : %c", num, grade);

return 0;
}

