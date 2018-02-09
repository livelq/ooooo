#include<stdio.h>
int main()
{
	float p,n,m,t;
	n=1;t=1;p=0;
	for(m=1;m<=100;m++)
	{
		n=-n;
		t=n/m;
		p=p+t;
	}
	printf("%f",p);
}
