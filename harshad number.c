#include<stdio.h.>
int harshad(int num)
{
	int r=0,res=0,a=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res+r;
	}
	if(a%res==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(harshad(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
