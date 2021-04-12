//program to implement extended euclidean algorithm
#include<stdio.h>
int gcdExtended(int a, int b,int *s,int *t){
	if(a==0){
		*s=0;
		*t=1;
		return b;
	}
	int s1,t1;
	int gcd=gcdExtended(b%a,a,&s1,&t1);
	*s=t1-(b/a)*s1;
	*t=s1;
	return gcd;
}
int main(){
	int s,t;
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b where a>b:");
	scanf("%d",&b);
	int g=gcdExtended(a,b,&s,&t);
	printf("gcd(%d,%d)=%d\n",a,b,g);
	printf("x=%d,y=%d",s,t);//gcd(a,b)=sa+tb
}
