#include<stdio.h>
int main()
{
	float  m,e,i,t,n;
	e=1;i=1;n=1;
	for(m=1;n/m>=1e-7;)
	{
		m=m*i;
		i++;
		t=n/m;
		e=e+t;
	}
	printf("%f",e);
 } 
