#include <stdio.h>
#define SIZE	5

int avg(int score[]);
int min(int score[]);
int max(int score[]);
int in(int score[]);
int out(int score[]);

int main(void)
{
	int menu;
	int score[SIZE];
	
	 
	while(1){
		
		printf("\n=========학생성적관리==========\n");
		printf("1.점수입력\n");
		printf("2.점수출력\n");
		printf("3.평균출력\n");
		printf("4.최저점출력\n");		
		printf("5.최고점출력\n");
		printf("6. 종료\n");
		printf("선택>");
		scanf("%d", &menu);

	
	switch(menu)
	{
		case 1: 
			in(score); 
			break;
		case 2: 
			out(score); 
			break;
		case 3: 
			avg(score);
			break;
		case 4: 
			min(score);	
			break;
		case 5: 
			max(score);
			break;
	 } 
			}
}
	 

int in (int score[])
	{
	printf("입력하세요.:");
	scanf("%d %d %d %d %d", &score[0],&score[1],&score[2],&score[3],&score[4]);
	printf("-");
	return 0;
}	
int out (int score[])
	{
	printf("%d %d %d %d %d",score[0],score[1],score[2],score[3],score[4]);
	return 0;
}	



int avg (int score[])
{
	double res;
	res=(score[0]+score[1]+score[2]+score[3]+score[4])/5.0;
	printf("%.2lf", res);
	return 0;
}

int max (int score[])
{
	int max = score[0];
	int i;
    for(i=0; i<5; i++)
    {
        if(score[i] > max)
            max = score[i];
    }

    printf("최대값 : %d\n", max);

    return 0;
}

int min(int score[])
{
    int min = score[0];
	int i;
    for(i=0; i<5; i++)
    {
        if(score[i] < min)
            min = score[i];
    }

    printf("최소값 : %d\n", min);

    return 0;
}

