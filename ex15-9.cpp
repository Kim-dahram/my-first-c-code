/*
#include <stdio.h>

int main(void)
{
	int a =10;
	double b=3.5;
	void *vp;
	
	vp=&a;
	printf("a:%d\n", *(int *)vp); //형변환 없을시 컴파일 안댐 
	
	vp =&b;
	printf("b:%.1lf\n", *(double*)vp); // 맨앞 간접연산자 없을시 주소 이상해짐...  
	
	return 0;
}
*/
