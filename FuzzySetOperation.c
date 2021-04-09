#include<stdio.h>
#include<math.h>
int main()
{
	float a[4]={0.1,0.4,0.6,0.9};
	float b[4]={0.0,0.2,0.4,0.1};

	int i;
	printf("        Two Sets are:\n \n");
	printf("set A: {");
	for(i=0;i<4;i++)
	{
		printf("%.1f",a[i]);
		if(i<=4-2)
            printf(" , ");
	}
	printf("}\n \n");
	printf("Set B: {");
	for(i=0;i<4;i++)
	{
		printf("%.1f",b[i]);
		if(i<=4-2)
            printf(" , ");
	}
	printf("}\n \n");

	printf("Fuzzy union of set A & set B is: ");
	printf("{");
	for(i=0;i<=3;i++)
	{
		printf("%.1f  ",fmax(a[i],b[i]));
		
	}
	printf("}\n \n");
	printf("Fuzzy intersection of set A & set B is: ");
	printf("{");
	for(i=0;i<=3;i++)
	{
		printf("%.1f  ",fmin(a[i],b[i]));
	}
	printf("}\n \n");
	
	printf("Fuzzy complement of set A is: ");
	printf("{");
	for(i=0;i<=3;i++)
	{
		printf("%.1f  ",(1-a[i]));
	}
	printf("}\n \n");
	
	printf("Fuzzy difference of set A & set B is: ");
	printf("{");
	for(i=0;i<=3;i++)
	{
		printf("%.1f  ",fmin(a[i],1-b[i]));
	}
	printf("}\n \n");	
	return 0;
}