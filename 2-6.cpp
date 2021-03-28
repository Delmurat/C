#include<stdio.h>
int	main()
{
	int	num0=200;
	int	*p=NULL;
	p=&num0;
	*p=20;
	printf("%d",num0);
	return	0;
}
