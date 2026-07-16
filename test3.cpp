#include <stdio.h>


int main(void)
{
	int a= 10;
	int *pa =&a; 
	printf("%p %p\n", &a, pa);  //%p는 16진수로 %u는 숫자기호로 나타내는 방식 
	printf("%p\n", pa+1);
	
	int ary1[]={1,2};
	int (*pary1)=ary1;
	printf("%p %p\n", ary1, pary1);    //1차원 배열을 가리키는 배열 포인터 선언 
	printf("%p %p\n", ary1+1,pary1+1); // 왜 4가 오르는지?? 
	
	char ary2[]={'a','b'};
	char (*pary2)=ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n", ary2+1, pary2+1);
	
	int ary3[2][3]={{1,2,3},{4,5,6}};
	int (*pary3)[3]= ary3;
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3+1, pary3+1);
	
	char*ary4[]={"hi", "good", "thank"};
	char* (*pary4)=ary4;
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4+1, pary4+1);
	
	
	return 0;
}

