#include<stdio.h>
int main()
{
	int day,n1,n2;
	n2=1;
	for(day=10;day>1;day--)
	{
		n1=(n2+1)*2;
		n2=n1;
	}
	printf("��%d���������=%d",day,n1);
}
