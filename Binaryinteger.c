//Programs to implement binary integer addition, multiplication, and division.
#include<stdio.h>
int binAdd(int a, int b){	
	int carry=0,bs,i=1,sum=0;
	while(a!=0||b!=0){ 
		bs=(a%10+b%10+carry)%2;
		carry=(a%10+b%10+carry)/2;
		sum=i*bs+sum;
		i=i*10;
		a=a/10;
		b=b/10;
	}
	if(carry!=0){
		sum=i*carry+sum;
	}
	return sum;
}

	int binMult(int a,int b){
	int i,mult=0;
	for(i=0;i<b;i++){
		mult=binAdd(mult,a);
	}
	return mult;
}

int binDiv(int a, int b){
	int i,res,count=0,twoscomp;
	if(a<b){
		return 0;
	}
	res = a;
	twoscomp =binAdd(~b,1);
	for(i=0;res>0;i++){
		res =binAdd(res,twoscomp);
		if(res<=0){
			if(res==0){
				count=binAdd(count,1);
			}
			break;
		}
		else{
			count=binAdd(count, 1);
		}
	}
	return count;
}
	
int main(){
	int n1,n2;
	printf("Enter the first binary integer value: ");
	scanf("%d",&n1);
	printf("Enter the second binary integer value: ");
	scanf("%d",&n2);
	printf("\n \n");
	printf("Addition of two binary integer is :%d\n \n",binAdd(n1,n2));
	printf("Multiplication of two binary integer is :%d\n \n",binMult(n1,n2));
	printf("Division of two binary integer is :%d",binDiv(n1,n2));
	return 0;
}