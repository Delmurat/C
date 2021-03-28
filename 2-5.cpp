#include<stdio.h>

int	func(int	i)
{
	int	a=i%10;
	int	b=(i/10)%10;
	int	c=i/100;
	if(a*a*a+b*b*b*+c*c*c==i)
	{
		return	1;
	}else{
		return	0;
	}
	
}

int	main()
{
	int	a=0;
	printf("输入数字，来看看是不是水仙花树\n");
	scanf("%d",&a);
	int	i=func(a);
	if(i==1)
	{
		printf("%d是水仙花数",a);
	}else{
		printf("%d不是水仙花数",a);
	}
	return	0;
}
