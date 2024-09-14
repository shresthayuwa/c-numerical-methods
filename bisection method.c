#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) pow(x,3)-x-4
void main()
{
	int step=1;
	float a,b,tempa,tempb,fa,fb,x,fx,e;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the error: ");
	scanf("%f", &e);
	tempa=f(a);
	tempb=f(b);
	printf("%f",tempa*tempb);
	if(tempa * tempb> 0.0)
	{
		printf("incorrect guess");
		exit(0);
	}
	printf("\nstep\t\ta\t\tb\t\tx\t\tf(a)\t\tf(b)\t\tf(x)\n");
		do{
			x=(a+b)/2;
			fx=f(x);
			printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f\n",step,a,b,x,tempa,tempb,fx);
			if(tempa*fx>0)
			{
				a=x;
				tempa=fx;
			}
			else
			{
				b=x;
				tempb=fx;
			}
			step=step+1;
		}while(fabs(fx)>e);
		printf("%f is the root for the equation",x);	
}
