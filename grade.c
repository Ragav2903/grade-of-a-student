#include<stdio.h>
int main()
{
	int s1,s2,s3,total,avg;
	printf("enter the marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	avg=total/3;
	if(avg<=100&&avg>=85)
	{
	printf("Grade A");
    }
	else if(avg<=84&&avg>=70)
	{ 
	printf("Grade B");
    }
	else if(avg<=69&&avg>=55)
	{
     printf("Grade C");
    }
	else if(avg<=54&&avg>=40)
	{
	 printf("Grade D");
    }
	else
	{
	 printf("Fail");
    }
	return 0;
}
