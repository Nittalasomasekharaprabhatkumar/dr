#include<stdio.h>
int isfib(int num)
{
	int a=0,b=1,c,d;
	if(num==0 || num==1)
	{
		printf("true");
		return;
	}
	{
		while(c<=num)
	   {
			d=c;
			c=a+b;
	 		a=b;
			b=c;
		}
	}
	if(c==num)
	{
		printf("True");
	}
	else if((c-num)>(num-d))
	{
		printf("%d",d);
	}
	else if((c-num)<(num-d))
	{
		printf("%d",c);
	}
	else
	{
		printf("%d %d",d,c);
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=isfib(num);
	return 0;
}
