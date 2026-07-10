//여러 사용자 함수가 있을 때, 호출 부분의 꼬임을 방지하기 위해 함수원형 사용~ 
/*
#include <stdio.h>

int func(int a, int b); //함수원형의 형태는 함수의 머리부분을 작성 

int main ()
{
	int res;
	res = func(10,20);
	printf("결과 %d\n",res );
	return 0;
}

int func(int a, int b)  //메인 아래에 함수를 넣어주고 , 메인 위쪽에 원형을 기재. 
{
	int ret;
	ret = a+b;
	
return ret;
}
*/
