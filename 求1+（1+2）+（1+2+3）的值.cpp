#include<stdio.h>
int main()
{
	int i,j,n,t,sum;
	printf("please input n:");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			t=t+j;
		}
		sum=sum+t;
	}
	printf("%d",sum);
}
