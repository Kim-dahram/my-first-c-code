/*
#include <stdio.h>

int main(void)
{
	int a=10;
	int *pi;
	int **ppi;
	
	pi=&a;
	ppi=&pi;
	
	printf("---------------------------------\n");
	printf("변수 변수값 &연산 *연산 **연산 \n");
	printf("---------------------------------\n");
	printf(" a  %12d  %12u\n", a, &a); // &a는 a가 담겨있는 주소를 갖고옴 
	printf(" pi  %12u  %12u  %12d\n", pi, &pi, *pi);//pi=a주소~, &pi는 pi가 갖고있는 자체고유주소, *pi는 주소 안에 있는 데이터값 갖고옴 (=a)
	printf("ppi  %12u  %12u  %12u  %12u\n", ppi, &ppi, *ppi, **ppi);//ppi=pi주소~(&pi), &ppi는 ppi의 자체고유주소, 
	printf("---------------------------------\n");   // *ppi는 데이터값(데이터값은 &pi라서 pi값=a주소) **ppi는 주소값에 담긴 데이터의 주소값의 데이터 
	
	return 0;
}
*/
