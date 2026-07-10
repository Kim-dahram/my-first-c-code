/*
#include <stdio.h>

int main(void)
{
	int a=10, b=20;
	const int *pa=&a;   //포인터 변수에 숫자 입력(데이터가 상수) 불가 (주소는 가능) 
	int *const pb=&a;   //포인터 변수에 다른 주소(변수가 상수) 불가 (데이터는가능)
	const int* const pc = &a; // 완전한 상수화... 둘다불가
	
	 
	
	printf("a: %d\n", a);
	printf("a: %d\n", *pa);
	
//	*pa=100; const포인터라서 데이터값 변경 X 
	pa = &b;  // 주소값 변경은 가능... 
//	printf("b: %d\n",*pa);
	

	printf("b:%d\n", b);
	*pb = 200;         //간접참조로 값을 변경이 일어난다. 
	printf("b:%d\n", *pb);
	
//	pb = &a;      불가능 
	 
	return 0;
}
*/
