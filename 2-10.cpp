#include<stdio.h>

void	func(int(*p)[2])
{
	for(int	i=0;i<2;i++)
	{
		for(int	k=0;k<2;k++)
		{
			printf("%d\t",p[i][k]);
		}
		
	}
}

int	main()
{
	int	a[2][2]={1,2,3,4};
	func(a);
	return	0;
}
