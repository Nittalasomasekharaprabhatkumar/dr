#include<stdio.h>
#include<math.h>
int disarium(int num)
{
	int r=0,res=0,rev=0,v=0,n=num,i=1;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	while(rev)
	{
		v=rev%10;
		rev=rev/10;
		res=res+pow(v,i);
		i++;
	}
	if(res==n)
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
	if(disarium(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
