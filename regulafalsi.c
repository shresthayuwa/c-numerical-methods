#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) pow(x,2)-4*x+3

void main()
{	
	int it=0;
	float a,b,c,fc,e,temp1,temp2;
	main:
	printf("enter the initial guess for a and b: ");
	scanf("%f%f",&a,&b);
	printf("enter the tolerance error: ");
	scanf("%f",&e);
	temp1=f(a);
	temp2=f(b);
	if(temp1*temp2>0)
	{
		printf("wrong guess: %f",temp1*temp2);
		fflush(stdin);
		goto main;
	}
	do{
		printf("\n\nStep\t\ta\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c)\n");
		c=(a*temp2-temp1*b)/(temp2-temp1);
		fc=f(c);
		printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\n",it,a,b,temp1,temp2,c,fc);
		if (fc * temp1 < 0) {
			b = c;
			temp2 = fc;
		} else {
			a = c;
			temp1 = fc;
		}
		it++;
	}while(fabs(fc)>e);
	printf("%f is the root of the equation",c);
}
