#include<stdio.h>

void	func(int	a[],int	b)
{
	for(int	i=0;i<b;i++)
	{
		for(int	j=0;j<b-1;j++)
		if(a[j]>a[j+1])
		{
			int	t=0;
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}

int	main()
{
	int	nArray[10]={9,2,5,4,3,8,1,6,7};
	func(nArray,10);
	for(int	i=0;i<10;i++)
	{
		printf("%2d",nArray[i]);
	}
	return	0;
}
