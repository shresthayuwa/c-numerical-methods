#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) pow(x,3)+3*x+1
#define y(x) 3*pow(x,2)+3

void main()
{	
	int count=0;
	float e,temp1,temp2,fx,x0=3;
	printf("the initial guess is 3\n");
	printf("enter the tolerance error: ");
	scanf("%f",&e);
	do{
		printf("\niteration: %d\n",count);
		printf("x0=%f",x0);
		temp1=f(x0);
		temp2=y(x0);
		printf("\nf(x)=%f\n",temp1);
		printf("\ny(x)=%f\n",temp2);
		fx=x0-(temp1/temp2);
		printf("\n%f-(%f/%f)\n\nAns:%f\n\n",x0,temp1,temp2,fx);
		count++;
		x0=fx;
	}while(fabs(f(fx))>e);
	printf("\nThe root of the equation is %f",fx);
}
