#include<stdio.h>

void	func(int	*p1,int	*p2)
{
	int	t=*p1;
	*p1=*p2;
	*p2=t;
}

int	main()
{
	int	a=20;
	int	b=10;
	func(&a,&b);
	return	0;
}
