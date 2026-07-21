/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char *intro;

};

int main(void)
{
	struct profile yuni;
	
	strcpy(yuni.name,"서하윤");
	yuni.age=17;
	yuni.height=164.5;
	
	yuni.intro=(char *)malloc(80);
	printf("자기소개:");
	gets(yuni.intro);
	
	printf("name:%s\n",yuni.name);
	printf("age:%d\n",yuni.age);
	printf("height:%.1lf\n",yuni.height);
	printf("intro:%s\n",yuni.intro);
	free(yuni.intro);
	
	return 0;
}
*/
