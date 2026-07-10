/*
#include<stdio.h>

		int a, b, sum, sub, mul, c, d; 
		double inv;
		char op;
   void cal (void);
	
	int main(void)
	{
		int result;
		
		cal();
	    printf("%d\n", result);
		return 0;
	}



void cal(void)
{
		int a, b, sum, sub, mul, c, d; 
		double inv;
		char op; //오퍼레이트 스위치에 들어가는 값 

		printf("계산기 입력\n");
		scanf("%d%c%d", &a, &op, &b);
		
   switch (op)
	{
		case '+':
		 (sum = a+b);
		printf("%d\n", sum);
		break;

		case '-':
		 (sub = a-b);
		printf("%d\n", sub);
		break;

		case '*':
		 (mul = a*b);
		printf("%d\n", mul);
		break;

		case '/':
		 (inv = ((double)a) / ((double)b) ); //실수로 받는것 
	     (c=a/b); 
		 (d=a%b);

		printf("%.1lf\n", inv);
		printf("몫 : %d\n", c);
		printf("나머지 : %d\n", d);
		break;
	}
	
	
	return;
}
*/
