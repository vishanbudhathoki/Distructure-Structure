//Programs to implement ceiling and floor functions.
#include<stdio.h>
#include<math.h>
int main(){
	float value;
	printf("Enter a float value:");
	scanf("%f",&value);
	printf("ceiling value of %f is %f\n",value,ceil(value));
	printf("floor value of %f is %f\n",value,floor(value));	
return 0;
}