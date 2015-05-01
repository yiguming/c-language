#include<stdio.h>
main()
{
	int i,j,m,n;
	int a[16] ={0};
	printf("Please input a number : ");
	scanf("%d",&n);
	for(m=0;m<15;m++)
	{
		i = n % 2;
		j = n / 2;
		n  = j ;
		a[m] = i;

	}
	for (m = 15;m>=0;m--)
	{
		printf("%d",a[m]);
		if (m %4 ==0)
		{
		printf(" ");
		}
	}
	getchar();
	return 0;

}