/*
#include <stdio.h>

int main(void)
{
	int score[3][4];
	int total;
	double avg;
	int i, j;  //i는 반복횟수 j는 점수갯수 
	
	for (i=0; i<3; i++)    //배열중 앞 숫자만큼 반복 
	{
		printf("점수 4개 입력:");
		for (j=0;j<4;j++) //한줄에 4개가 될 때까지 커서 계속 깜빡거림;;;
		{
			scanf("%d", &score[i][j]); //입력받음 [i횟수(몇줄)] [j갯수(가로)] 
		 } 
	}
	
	for (i=0;i<3;i++)  //배열중 앞[] 숫자만큼 반복 
	{
		total=0;       //3줄 입력하면 각 한줄씩 초기화~ 
		for(j=0;j<4;j++)  //4개 할거예요 , 뒤[]숫자만큼 
		{
			total += score[i][j];  // 총합 <-대입한다. 스코어 합
		}
		avg=total/4.0;  //총합 나누기 실수 
		printf("총점:%d, 평균:%.2lf\n", total, avg); //출력 위부터 순서대로 세줄 나옴 
	}
	return 0;
}
*/
