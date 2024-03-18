#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,delta;
	printf("please enter a b c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	printf("a=%lf,b=%lf,c=%lf\n",a,b,c);
	if(a==0&&b==0&&c==0){
		printf("this question is meaningless!");
	}
	if(a==0&&b==0&&c!=0){
		printf("this question is wrong!");
	}
	if(a==0&&b!=0&&c!=0){
		printf("x=%0.2f\n",-c/b);
	}
	  if(delta>0){
	    printf("x1=%0.2f\n",(-b+sqrt(delta))/2*a);
		printf("x2=%0.2f\n",(-b-sqrt(delta))/2*a);	
	  }
	  if(delta<0){
	  	printf("the question is no real root");
	  }
	 
	return 0;
}
