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
		printf("%dż��",a);
	}else{
		printf("%d����ż��",a);
	}
	
	return	0;
}
