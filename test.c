/*

#include <stdio.h>
struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score s_list[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("3과목 점수 입력 :");
		scanf("%d %d %d", &s_list[i].kor,&s_list[i].eng,&s_list[i].math);
		printf("국어 : %d\n영어 : %d\n수학 : %d\n",s_list[i].kor,s_list[i].eng,s_list[i].math);
	}

	for (i=0;i<3;i++)
	{
		printf("%d번학생 3과목 점수총합 : %d, 평균 : %.1lf\n",i+1,s_list[i].kor+s_list[i].eng+s_list[i].math, (s_list[i].kor+s_list[i].eng+s_list[i].math)/3.0);
	
	}
	

	printf("국어 점수총합 :%d\n",s_list[0].kor+s_list[1].kor+s_list[2].kor);	
	printf("영어 점수총합 :%d\n",s_list[0].eng+s_list[1].eng+s_list[2].eng);	
	printf("수학 점수총합 :%d\n\n",s_list[0].math+s_list[1].math+s_list[2].math);		


	return 0;
}
*/
