#include<stdio.h>

int	func(int	i)
{
	if(i%2==0){
		return	1;
	}else{
		return	0;
	}
}


int	main()
{
	int	a=0;
	scanf("%d",&a);
	int	i=func(a);
	if(i==1)
	{
		printf("%d偶数",a);
	}else{
		printf("%d不是偶数",a);
	}
	
	return	0;
}
