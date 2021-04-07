//program to implement set operations union, intersection, difference and cartesian product
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10],b[10],c[10];
    int option,n,m,i,j,k,x=0,f1;
    //Taking the value of set A
    printf("Enter the limit of Set A:");
    scanf("%d",&n);
    printf("Enter the value of set A:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Taking the value of set B
    printf("Enter the limit of Set B:");
    scanf("%d",&m);
    printf("Enter the value of set B:\n");
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    printf("\n \n");
    //Displaying the value of Set A and Set B
    printf("set A:{");
	for(i=0;i<n;i++){
	    printf("%d",a[i]);
        if(i<=n-2)
            printf(",");
    }    
	printf("}\n");
    
	printf("set B:{");
	for(j=0;j<m;j++){
	    printf("%d",b[j]);
        if(j<=m-2)
            printf(",");
    }        
	printf("}\n");
    printf("\n \n");

    do{
    printf("What operations do you want to perform? Select option number. Enter 0 to exit\n");
    printf("1.Union\n");
    printf("2.Intersection\n");
    printf("3.Difference (A-B)\n");
    printf("4.Difference(B-A)\n");
    printf("5.Cartesian Product\n");
    printf("6.Clear Screen\n");
    printf("\n \n");
    scanf("%d",&option);
    switch(option){
        case 0:
            break;
        
        case 1:
        	k=0;
        	x=0;
            for(i=0;i<n;i++){
                c[x]=a[i];
                x++;
            }
            k=x;
            for(i=0;i<m;i++){
                f1=0;
                for(j=0;j<n;j++){
                    if(a[j]==b[i]){
                        f1=0;
                        break;
                    }
                    else
                        f1=1;
                }
                if(f1==1){
                    c[k]=b[i];
                    k++;
                }
            printf("\n Union of A and B is:{");
            for(i=0;i<k;i++){
                printf("%d",c[i]);
                if(i<=k-2)
                    printf(",");
            }
            printf("}");
            printf("\n \n");
            break;
        case 2:
        	k=0;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(a[i]==b[j]){
                        c[k]=a[i];
                        k++;
                    }
                }         
            }
            printf("Intersection of A and B:{");
            for(i=0;i<k;i++){
                printf("%d",c[i]);
                if(i<=k-2)
                    printf(",");
            }
            printf("}\n \n");
            break;
        case 3:
        	k=0;
            for(i=0;i<n;i++){
		        f1=0;
		        for(j=0;j<m;j++){
		        	if(a[i]==b[j]){
		        		f1=0;
		        		break;
					}
					else{
					    f1=1;
					}
			    }
					if(f1==1){
						c[k]=a[i];
						k++;
					}
			}
			printf("Difference of A-B is:{");
			for(i=0;i<k;i++){
				printf("%d",c[i]);
                if(i<=k-2)
                    printf(",");
			}
			printf("}\n \n");
			break;
        case 4:
        	k=0;
            for(i=0;i<m;i++){
		        f1=0;
		        for(j=0;j<n;j++){
		        	if(b[i]==a[j]){
		        		f1=0;
		        		break;
					}
					else{
					    f1=1;
					}
				}
				if(f1==1){
					c[k]=b[i];
					k++;
				}
			}
			printf("Difference of B-A is:{");
			for(i=0;i<k;i++){
				printf("%d",c[i]);
                if(i<=k-2){
                    printf(",");
                }
			}
			printf("}\n \n");
			break;
        case 5:
            printf("Cartesian product(A*B):");
            printf("{");
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    printf("(%d,%d)",a[i],b[j]);
                        printf(",");
                }
            }
            printf("}");
            printf("\n \n");
			break;
        case 6:
            system("Cls");
            break;
        default:
            printf("Enter the proper option number\n \n");
        }
    }    
    }while(option!=0);
    return 0;
}
