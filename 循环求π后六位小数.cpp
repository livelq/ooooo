#include<stdio.h>
#include<math.h>
int main()
{
	float n,m,t,pi;
	n=1;m=1;pi=0;
	for(t=1;fabs(t)>=1e-6;)   /*此处不能有t++因为循环变量没有增值*/ 
	{
		pi=pi+t;
		m=m+2;
		n=-n;
		t=n/m;
	}
	pi=pi*4;
	printf("pi=%f",pi);
}
