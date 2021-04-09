//GCD of two numbers using Euclidean algorithm
#include<stdio.h>
int main()
{
	int x,y,r;
	printf("Enter two integers:");
	scanf("%d %d",&x,&y);
	while(y>0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	printf("GCD=%d\n",x);
}
