#include<stdio.h>

int	main()
{
	
	printf("ƽ��ֵ����������(����10������С����) \n");
	int	a[10]={4,8,2,5,7,9};
	for(int	i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int	sum=0;
	for(int	i=0;i<10;i++)
	{
		sum+=a[i];
	}
	sum/10;
	printf("%d",sum);
}
